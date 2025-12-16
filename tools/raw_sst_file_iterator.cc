//  Copyright (c) 2011-present, Facebook, Inc.  All rights reserved.
//  This source code is licensed under both the GPLv2 (found in the
//  COPYING file in the root directory) and Apache 2.0 License
//  (found in the LICENSE.Apache file in the root directory).
//
#ifndef ROCKSDB_LITE


#include <cinttypes>
#include <memory>

#include "db/memtable.h"
#include "db/write_batch_internal.h"
#include "rocksdb/status.h"
#include "rocksdb/utilities/ldb_cmd.h"
#include "table/block_based/block.h"
#include "table/block_based/block_based_table_builder.h"
#include "table/block_based/block_based_table_factory.h"
#include "table/meta_blocks.h"
#include "table/plain/plain_table_factory.h"
#include "tools/raw_sst_file_iterator.h"

namespace ROCKSDB_NAMESPACE {

RawSstFileIterator::RawSstFileIterator(InternalIterator* iterator,
                             bool has_from, Slice* from_key,
                             bool has_to, Slice* to_key)
    : iter_(iterator),
      ikey(new ParsedInternalKey()),
      has_to_(has_to),
      to_key_(to_key) {
  if (has_from) {
    InternalKey k;
    k.SetMinPossibleForUserKey(*from_key);
    iter_->Seek(k.Encode());
  } else {
    iter_->SeekToFirst();
  }
  initKey();
}

bool RawSstFileIterator::Valid() const {
  return iter_->Valid() && (!has_to_ ||
                            BytewiseComparator()->Compare(
                                key(), *to_key_) < 0);
}

void RawSstFileIterator::initKey() {
  if (iter_->Valid()) {
    ParseInternalKey(iter_->key(), ikey, true /* log_err_key */);
  }
}
void RawSstFileIterator::Next() {
  iter_->Next();
  initKey();

}

Slice RawSstFileIterator::key() const {
  return ikey->user_key;
}

uint64_t RawSstFileIterator::sequenceNumber() const {
    return ikey->sequence;
}

uint32_t RawSstFileIterator::type() const {
    return static_cast<int>(ikey->type);
}

Slice RawSstFileIterator::value() const {
    return iter_->value();
}
}  // namespace ROCKSDB_NAMESPACE

#endif  // ROCKSDB_LITE
