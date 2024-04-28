// Copyright (c) 2011-present, Facebook, Inc.  All rights reserved.
//  This source code is licensed under both the GPLv2 (found in the
//  COPYING file in the root directory) and Apache 2.0 License
//  (found in the LICENSE.Apache file in the root directory).
//
// This file implements the "bridge" between Java and C++ and enables
// calling c++ ROCKSDB_NAMESPACE::Iterator methods from Java side.

#include <jni.h>
#include <stdio.h>
#include <stdlib.h>

#include "include/org_rocksdb_ParsedEntryInfo.h"
#include "rocksdb/types.h"
#include "rocksdb/options.h"
#include "rocksjni/portal.h"
#include "rocksjni/cplusplus_to_java_convert.h"
#include "rocksdb/utilities/types_util.h"



/*
 * Class:     org_rocksdb_ParsedEntryInfo
 * Method:    newParseEntryInstance
 * Signature: ()J
 */
jlong JNICALL Java_org_rocksdb_ParsedEntryInfo_newParseEntryInstance
    (JNIEnv *env, jclass /*cls*/) {
  ROCKSDB_NAMESPACE::SstFileReader *parsed_entry_info =
      new ROCKSDB_NAMESPACE::ParsedEntryInfo();
  return GET_CPLUSPLUS_POINTER(parsed_entry_info);
}

/*
 * Class:     org_rocksdb_ParsedEntryInfo
 * Method:    parseEntry
 * Signature: (JJ[BI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_ParsedEntryInfo_parseEntry
(JNIEnv *env, jclass cls, jlong handle, jlong options_handle, jbyteArray jtarget, jint len) {
  Options* *options = reinterpret_cast<const ROCKSDB_NAMESPACE::Options*>(options_handle);
  auto *parsed_entry_info = reinterpret_cast<const ROCKSDB_NAMESPACE::ParsedEntryInfo*>(handle);
  jbyte* target = env->GetByteArrayElements(jtarget, nullptr);
  if (target == nullptr) {
  // exception thrown: OutOfMemoryError
    return;
  }
  ROCKSDB_NAMESPACE::Slice target_slice(reinterpret_cast<char*>(target), len);
  ROCKSDB_NAMESPACE::ParseEntry(target_slice, options->comparator, parsed_entry_info);

}

/*
 * Class:     org_rocksdb_ParsedEntryInfo
 * Method:    parseEntryDirect
 * Signature: (JJLjava/nio/ByteBuffer;II)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_ParsedEntryInfo_parseEntryDirect
(JNIEnv *, jclass, jlong, jlong, jobject, jint, jint);

/*
 * Class:     org_rocksdb_ParsedEntryInfo
 * Method:    parseEntryByteArray
 * Signature: (JJ[BII)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_ParsedEntryInfo_parseEntryByteArray
(JNIEnv *, jclass, jlong, jlong, jbyteArray, jint, jint);

/*
 * Class:     org_rocksdb_ParsedEntryInfo
 * Method:    userKeyDirect
 * Signature: (JLjava/nio/ByteBuffer;II)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_ParsedEntryInfo_userKeyDirect
    (JNIEnv *, jclass, jlong, jobject, jint, jint);

/*
 * Class:     org_rocksdb_ParsedEntryInfo
 * Method:    userKeyByteArray
 * Signature: (J[BII)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_ParsedEntryInfo_userKeyByteArray
    (JNIEnv *, jclass, jlong, jbyteArray, jint, jint);

/*
 * Class:     org_rocksdb_ParsedEntryInfo
 * Method:    userKeyJni
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_rocksdb_ParsedEntryInfo_userKeyJni
    (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_ParsedEntryInfo
 * Method:    getSequenceNumberJni
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_ParsedEntryInfo_getSequenceNumberJni
    (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_ParsedEntryInfo
 * Method:    getValueTypeJni
 * Signature: (J)B
 */
JNIEXPORT jbyte JNICALL Java_org_rocksdb_ParsedEntryInfo_getValueTypeJni
    (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_ParsedEntryInfo
 * Method:    disposeInternalJni
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_ParsedEntryInfo_disposeInternalJni(JNIEnv* /*env*/, jclass /*jobj*/,
                                                                           jlong handle) {
  auto* it = reinterpret_cast<ROCKSDB_NAMESPACE::ParsedEntryInfo*>(handle);
  assert(it != nullptr);
  delete it;
}

/*
 * Class:     org_rocksdb_ParsedEntryInfo
 * Method:    disposeInternal
 * Signature: (J)V
 */
void Java_org_rocksdb_ParsedEntryInfo_disposeInternalJni(JNIEnv* /*env*/,
                                                         jclass /*jobj*/,
                                                         jlong handle) {

}

/*
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    newParseEntryInstance
 * Signature: ()J
 */
jboolean Java_org_rocksdb_ParsedEntryInfo_newParseEntryInstance(JNIEnv* /*env*/,
                                                     jclass /*cls*/,
                                                     jlong options_handle, jlong bu, jbyteArray, jint) {
  return reinterpret_cast<ROCKSDB_NAMESPACE::ParsedEntryInfo*>(handle)->Valid();
}

/*
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    seekToFirst0
 * Signature: (J)V
 */
void Java_org_rocksdb_SstFileReaderIterator_seekToFirst0Jni(JNIEnv* /*env*/,
                                                            jclass /*cls*/,
                                                            jlong handle) {
  reinterpret_cast<ROCKSDB_NAMESPACE::Iterator*>(handle)->SeekToFirst();
}

/*
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    seekToLast0
 * Signature: (J)V
 */
void Java_org_rocksdb_SstFileReaderIterator_seekToLast0Jni(JNIEnv* /*env*/,
                                                           jclass /*cls*/,
                                                           jlong handle) {
  reinterpret_cast<ROCKSDB_NAMESPACE::Iterator*>(handle)->SeekToLast();
}

/*
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    next0
 * Signature: (J)V
 */
void Java_org_rocksdb_SstFileReaderIterator_next0Jni(JNIEnv* /*env*/,
                                                     jclass /*cls*/,
                                                     jlong handle) {
  reinterpret_cast<ROCKSDB_NAMESPACE::Iterator*>(handle)->Next();
}

/*
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    prev0
 * Signature: (J)V
 */
void Java_org_rocksdb_SstFileReaderIterator_prev0Jni(JNIEnv* /*env*/,
                                                     jclass /*cls*/,
                                                     jlong handle) {
  reinterpret_cast<ROCKSDB_NAMESPACE::Iterator*>(handle)->Prev();
}

/*
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    seek0
 * Signature: (J[BI)V
 */
void Java_org_rocksdb_SstFileReaderIterator_seek0Jni(JNIEnv* env,
                                                     jclass /*cls*/,
                                                     jlong handle,
                                                     jbyteArray jtarget,
                                                     jint jtarget_len) {
  jbyte* target = env->GetByteArrayElements(jtarget, nullptr);
  if (target == nullptr) {
    // exception thrown: OutOfMemoryError
    return;
  }

  ROCKSDB_NAMESPACE::Slice target_slice(reinterpret_cast<char*>(target),
                                        jtarget_len);

  auto* it = reinterpret_cast<ROCKSDB_NAMESPACE::Iterator*>(handle);
  it->Seek(target_slice);

  env->ReleaseByteArrayElements(jtarget, target, JNI_ABORT);
}

/*
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    seekForPrev0
 * Signature: (J[BI)V
 */
void Java_org_rocksdb_SstFileReaderIterator_seekForPrev0Jni(JNIEnv* env,
                                                            jclass /*cls*/,
                                                            jlong handle,
                                                            jbyteArray jtarget,
                                                            jint jtarget_len) {
  jbyte* target = env->GetByteArrayElements(jtarget, nullptr);
  if (target == nullptr) {
    // exception thrown: OutOfMemoryError
    return;
  }

  ROCKSDB_NAMESPACE::Slice target_slice(reinterpret_cast<char*>(target),
                                        jtarget_len);

  auto* it = reinterpret_cast<ROCKSDB_NAMESPACE::Iterator*>(handle);
  it->SeekForPrev(target_slice);

  env->ReleaseByteArrayElements(jtarget, target, JNI_ABORT);
}

/*
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    status0
 * Signature: (J)V
 */
void Java_org_rocksdb_SstFileReaderIterator_status0Jni(JNIEnv* env,
                                                       jclass /*cls*/,
                                                       jlong handle) {
  auto* it = reinterpret_cast<ROCKSDB_NAMESPACE::Iterator*>(handle);
  ROCKSDB_NAMESPACE::Status s = it->status();

  if (s.ok()) {
    return;
  }

  ROCKSDB_NAMESPACE::RocksDBExceptionJni::ThrowNew(env, s);
}

/*
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    key0
 * Signature: (J)[B
 */
jbyteArray Java_org_rocksdb_SstFileReaderIterator_key0(JNIEnv* env,
                                                       jclass /*jcls*/,
                                                       jlong handle) {
  auto* it = reinterpret_cast<ROCKSDB_NAMESPACE::Iterator*>(handle);
  ROCKSDB_NAMESPACE::Slice key_slice = it->key();

  jbyteArray jkey = env->NewByteArray(static_cast<jsize>(key_slice.size()));
  if (jkey == nullptr) {
    // exception thrown: OutOfMemoryError
    return nullptr;
  }
  env->SetByteArrayRegion(
      jkey, 0, static_cast<jsize>(key_slice.size()),
      const_cast<jbyte*>(reinterpret_cast<const jbyte*>(key_slice.data())));
  return jkey;
}

/*
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    value0
 * Signature: (J)[B
 */
jbyteArray Java_org_rocksdb_SstFileReaderIterator_value0(JNIEnv* env,
                                                         jclass /*jcls*/,
                                                         jlong handle) {
  auto* it = reinterpret_cast<ROCKSDB_NAMESPACE::Iterator*>(handle);
  ROCKSDB_NAMESPACE::Slice value_slice = it->value();

  jbyteArray jkeyValue =
      env->NewByteArray(static_cast<jsize>(value_slice.size()));
  if (jkeyValue == nullptr) {
    // exception thrown: OutOfMemoryError
    return nullptr;
  }
  env->SetByteArrayRegion(
      jkeyValue, 0, static_cast<jsize>(value_slice.size()),
      const_cast<jbyte*>(reinterpret_cast<const jbyte*>(value_slice.data())));
  return jkeyValue;
}

/*
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    keyDirect0
 * Signature: (JLjava/nio/ByteBuffer;II)I
 */
jint Java_org_rocksdb_SstFileReaderIterator_keyDirect0(
    JNIEnv* env, jclass /*jcls*/, jlong handle, jobject jtarget,
    jint jtarget_off, jint jtarget_len) {
  auto* it = reinterpret_cast<ROCKSDB_NAMESPACE::Iterator*>(handle);
  ROCKSDB_NAMESPACE::Slice key_slice = it->key();
  return ROCKSDB_NAMESPACE::JniUtil::copyToDirect(env, key_slice, jtarget,
                                                  jtarget_off, jtarget_len);
}

/*
 * This method supports fetching into indirect byte buffers;
 * the Java wrapper extracts the byte[] and passes it here.
 *
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    keyByteArray0
 * Signature: (J[BII)I
 */
jint Java_org_rocksdb_SstFileReaderIterator_keyByteArray0(
    JNIEnv* env, jclass /*jcls*/, jlong handle, jbyteArray jkey, jint jkey_off,
    jint jkey_len) {
  auto* it = reinterpret_cast<ROCKSDB_NAMESPACE::Iterator*>(handle);
  ROCKSDB_NAMESPACE::Slice key_slice = it->key();
  auto slice_size = key_slice.size();
  jsize copy_size = std::min(static_cast<uint32_t>(slice_size),
                             static_cast<uint32_t>(jkey_len));
  env->SetByteArrayRegion(
      jkey, jkey_off, copy_size,
      const_cast<jbyte*>(reinterpret_cast<const jbyte*>(key_slice.data())));

  return static_cast<jsize>(slice_size);
}

/*
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    valueDirect0
 * Signature: (JLjava/nio/ByteBuffer;II)I
 */
jint Java_org_rocksdb_SstFileReaderIterator_valueDirect0(
    JNIEnv* env, jclass /*jcls*/, jlong handle, jobject jtarget,
    jint jtarget_off, jint jtarget_len) {
  auto* it = reinterpret_cast<ROCKSDB_NAMESPACE::Iterator*>(handle);
  ROCKSDB_NAMESPACE::Slice value_slice = it->value();
  return ROCKSDB_NAMESPACE::JniUtil::copyToDirect(env, value_slice, jtarget,
                                                  jtarget_off, jtarget_len);
}

/*
 * This method supports fetching into indirect byte buffers;
 * the Java wrapper extracts the byte[] and passes it here.
 *
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    valueByteArray0
 * Signature: (J[BII)I
 */
jint Java_org_rocksdb_SstFileReaderIterator_valueByteArray0(
    JNIEnv* env, jclass /*jcls*/, jlong handle, jbyteArray jvalue_target,
    jint jvalue_off, jint jvalue_len) {
  auto* it = reinterpret_cast<ROCKSDB_NAMESPACE::Iterator*>(handle);
  ROCKSDB_NAMESPACE::Slice value_slice = it->value();
  auto slice_size = value_slice.size();
  jsize copy_size = std::min(static_cast<uint32_t>(slice_size),
                             static_cast<uint32_t>(jvalue_len));
  env->SetByteArrayRegion(
      jvalue_target, jvalue_off, copy_size,
      const_cast<jbyte*>(reinterpret_cast<const jbyte*>(value_slice.data())));

  return static_cast<jsize>(slice_size);
}

/*
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    seekDirect0
 * Signature: (JLjava/nio/ByteBuffer;II)V
 */
void Java_org_rocksdb_SstFileReaderIterator_seekDirect0Jni(
    JNIEnv* env, jclass /*cls*/, jlong handle, jobject jtarget,
    jint jtarget_off, jint jtarget_len) {
  auto* it = reinterpret_cast<ROCKSDB_NAMESPACE::Iterator*>(handle);
  auto seek = [&it](ROCKSDB_NAMESPACE::Slice& target_slice) {
    it->Seek(target_slice);
  };
  ROCKSDB_NAMESPACE::JniUtil::k_op_direct(seek, env, jtarget, jtarget_off,
                                          jtarget_len);
}

/*
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    seekForPrevDirect0
 * Signature: (JLjava/nio/ByteBuffer;II)V
 */
void Java_org_rocksdb_SstFileReaderIterator_seekForPrevDirect0Jni(
    JNIEnv* env, jclass /*cls*/, jlong handle, jobject jtarget,
    jint jtarget_off, jint jtarget_len) {
  auto* it = reinterpret_cast<ROCKSDB_NAMESPACE::Iterator*>(handle);
  auto seekPrev = [&it](ROCKSDB_NAMESPACE::Slice& target_slice) {
    it->SeekForPrev(target_slice);
  };
  ROCKSDB_NAMESPACE::JniUtil::k_op_direct(seekPrev, env, jtarget, jtarget_off,
                                          jtarget_len);
}

/*
 * This method supports fetching into indirect byte buffers;
 * the Java wrapper extracts the byte[] and passes it here.
 *
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    seekByteArray0
 * Signature: (J[BII)V
 */
void Java_org_rocksdb_SstFileReaderIterator_seekByteArray0Jni(
    JNIEnv* env, jclass /*cls*/, jlong handle, jbyteArray jtarget,
    jint jtarget_off, jint jtarget_len) {
  const std::unique_ptr<char[]> target(new char[jtarget_len]);
  if (target == nullptr) {
    jclass oom_class = env->FindClass("/lang/java/OutOfMemoryError");
    env->ThrowNew(oom_class,
                  "Memory allocation failed in RocksDB JNI function");
    return;
  }
  env->GetByteArrayRegion(jtarget, jtarget_off, jtarget_len,
                          reinterpret_cast<jbyte*>(target.get()));

  ROCKSDB_NAMESPACE::Slice target_slice(target.get(), jtarget_len);

  auto* it = reinterpret_cast<ROCKSDB_NAMESPACE::Iterator*>(handle);
  it->Seek(target_slice);
}

/*
 * This method supports fetching into indirect byte buffers;
 * the Java wrapper extracts the byte[] and passes it here.
 *
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    seekForPrevByteArray0
 * Signature: (J[BII)V
 */
void Java_org_rocksdb_SstFileReaderIterator_seekForPrevByteArray0Jni(
    JNIEnv* env, jclass /*cls*/, jlong handle, jbyteArray jtarget,
    jint jtarget_off, jint jtarget_len) {
  const std::unique_ptr<char[]> target(new char[jtarget_len]);
  if (target == nullptr) {
    jclass oom_class = env->FindClass("/lang/java/OutOfMemoryError");
    env->ThrowNew(oom_class,
                  "Memory allocation failed in RocksDB JNI function");
    return;
  }
  env->GetByteArrayRegion(jtarget, jtarget_off, jtarget_len,
                          reinterpret_cast<jbyte*>(target.get()));

  ROCKSDB_NAMESPACE::Slice target_slice(target.get(), jtarget_len);

  auto* it = reinterpret_cast<ROCKSDB_NAMESPACE::Iterator*>(handle);
  it->SeekForPrev(target_slice);
}

/*
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    refresh0
 * Signature: (J)V
 */
void Java_org_rocksdb_SstFileReaderIterator_refresh0Jni(JNIEnv* env,
                                                        jclass /*cls*/,
                                                        jlong handle) {
  auto* it = reinterpret_cast<ROCKSDB_NAMESPACE::Iterator*>(handle);
  ROCKSDB_NAMESPACE::Status s = it->Refresh();

  if (s.ok()) {
    return;
  }

  ROCKSDB_NAMESPACE::RocksDBExceptionJni::ThrowNew(env, s);
}

/*
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    refresh1
 * Signature: (JJ)V
 */
void Java_org_rocksdb_SstFileReaderIterator_refresh1(JNIEnv* env,
                                                     jobject /*jobj*/,
                                                     jlong handle,
                                                     jlong snapshot_handle) {
  auto* it = reinterpret_cast<ROCKSDB_NAMESPACE::Iterator*>(handle);
  auto* snapshot =
      reinterpret_cast<ROCKSDB_NAMESPACE::Snapshot*>(snapshot_handle);
  ROCKSDB_NAMESPACE::Status s = it->Refresh(snapshot);

  if (s.ok()) {
    return;
  }

  ROCKSDB_NAMESPACE::RocksDBExceptionJni::ThrowNew(env, s);
}
