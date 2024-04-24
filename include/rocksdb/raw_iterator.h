// Copyright (c) 2011-present, Facebook, Inc.  All rights reserved.
//  This source code is licensed under both the GPLv2 (found in the
//  COPYING file in the root directory) and Apache 2.0 License
//  (found in the LICENSE.Apache file in the root directory).
// Copyright (c) 2011 The LevelDB Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file. See the AUTHORS file for names of contributors.
//
// An iterator yields a sequence of key/value pairs from a source.
// The following class defines the interface.  Multiple implementations
// are provided by this library.  In particular, iterators are provided
// to access the contents of a Table or a DB.
//
// Multiple threads can invoke const methods on an Iterator without
// external synchronization, but if any of the threads may call a
// non-const method, all threads accessing the same Iterator must use
// external synchronization.

#pragma once

#include <string>

#include "rocksdb/iterator.h"
#include "rocksdb/types.h"

namespace ROCKSDB_NAMESPACE {

    class RawIterator : public Iterator {
    public:
        // Return the SequenceNumber for the current entry.
        // REQUIRES: Valid()
        virtual uint64_t SequenceNumber() const = 0;

        // Return the SequenceNumber for the current entry.
        // REQUIRES: Valid()
        virtual EntryType type() const = 0;
    };
}  // namespace ROCKSDB_NAMESPACE
