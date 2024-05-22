// Copyright (c) 2011-present, Facebook, Inc.  All rights reserved.
//  This source code is licensed under both the GPLv2 (found in the
//  COPYING file in the root directory) and Apache 2.0 License
//  (found in the LICENSE.Apache file in the root directory).
//
// This file implements the "bridge" between Java and C++ and enables
// calling c++ ROCKSDB_NAMESPACE::Iterator methods from Java side.

#include <jni.h>
#include <stdlib.h>

#include "include/org_rocksdb_TypeUtil.h"
#include "rocksdb/options.h"
#include "rocksdb/utilities/types_util.h"
#include "rocksjni/portal.h"

/*
 * Class:     org_rocksdb_TypeUtil
 * Method:    getInternalKeyDirect0
 * Signature: (Ljava/nio/ByteBuffer;IILjava/nio/ByteBuffer;II)I
 */
jint JNICALL Java_org_rocksdb_TypeUtil_getInternalKeyDirect0(
    JNIEnv *env, jclass /*clz*/, jobject user_key, jint user_key_off,
    jint user_key_len, jobject int_key, jint int_key_off, jint int_key_len,
    jlong options_handle) {
  auto *options =
      reinterpret_cast<const ROCKSDB_NAMESPACE::Options *>(options_handle);
  std::string seek_key_buf;
  auto getInternalKeySeek = [&seek_key_buf,
                             &options](ROCKSDB_NAMESPACE::Slice &target_slice) {
    ROCKSDB_NAMESPACE::GetInternalKeyForSeek(target_slice, options->comparator,
                                             &seek_key_buf);
  };
  ROCKSDB_NAMESPACE::JniUtil::k_op_direct(getInternalKeySeek, env, user_key,
                                          user_key_off, user_key_len);
  ROCKSDB_NAMESPACE::Slice key_slice = seek_key_buf;
  return ROCKSDB_NAMESPACE::JniUtil::copyToDirect(env, key_slice, int_key,
                                                  int_key_off, int_key_len);
}

/*
 * Class:     org_rocksdb_TypeUtil
 * Method:    getInternalKeyByteArray0
 * Signature: ([BIILjava/nio/ByteBuffer;IIJ)I
 */
jint JNICALL Java_org_rocksdb_TypeUtil_getInternalKeyByteArray0(
    JNIEnv *env, jclass /*clz*/, jbyteArray user_key, jint user_key_off,
    jint user_key_len, jobject int_key, jint int_key_off, jint int_key_len,
    jlong options_handle) {
  auto *options =
      reinterpret_cast<const ROCKSDB_NAMESPACE::Options *>(options_handle);
  const std::unique_ptr<char[]> target(new char[user_key_len]);
  if (target == nullptr) {
    jclass oom_class = env->FindClass("/java/lang/OutOfMemoryError");
    env->ThrowNew(oom_class,
                  "Memory allocation failed in RocksDB JNI function");
    return static_cast<jsize>(0);
  }
  env->GetByteArrayRegion(user_key, user_key_off, user_key_len,
                          reinterpret_cast<jbyte *>(target.get()));
  ROCKSDB_NAMESPACE::Slice target_slice(target.get(), user_key_len);
  std::string seek_key_buf;
  ROCKSDB_NAMESPACE::GetInternalKeyForSeek(target_slice, options->comparator,
                                           &seek_key_buf);
  ROCKSDB_NAMESPACE::Slice key_slice = seek_key_buf;
  return ROCKSDB_NAMESPACE::JniUtil::copyToDirect(env, key_slice, int_key,
                                                  int_key_off, int_key_len);
}

/*
 * Class:     org_rocksdb_TypeUtil
 * Method:    getInternalKeyDirect1
 * Signature: (Ljava/nio/ByteBuffer;II[BIIJ)I
 */
jint JNICALL Java_org_rocksdb_TypeUtil_getInternalKeyDirect1(
    JNIEnv *env, jclass cls, jobject user_key, jint user_key_off,
    jint user_key_len, jbyteArray int_key, jint int_key_off, jint int_key_len,
    jlong options_handle) {
  auto *options =
      reinterpret_cast<const ROCKSDB_NAMESPACE::Options *>(options_handle);
  std::string seek_key_buf;
  auto getInternalKeySeek = [&seek_key_buf,
                             &options](ROCKSDB_NAMESPACE::Slice &target_slice) {
    ROCKSDB_NAMESPACE::GetInternalKeyForSeek(target_slice, options->comparator,
                                             &seek_key_buf);
  };
  ROCKSDB_NAMESPACE::JniUtil::k_op_direct(getInternalKeySeek, env, user_key,
                                          user_key_off, user_key_len);
  ROCKSDB_NAMESPACE::Slice key_slice = seek_key_buf;
  auto slice_size = key_slice.size();
  jsize copy_size = std::min(static_cast<uint32_t>(slice_size),
                             static_cast<uint32_t>(int_key_len));
  env->SetByteArrayRegion(
      int_key, int_key_off, copy_size,
      const_cast<jbyte *>(reinterpret_cast<const jbyte *>(key_slice.data())));
  return static_cast<jsize>(slice_size);
}

/*
 * Class:     org_rocksdb_TypeUtil
 * Method:    getInternalKeyByteArray1
 * Signature: ([BII[BIIJ)I
 */
jint JNICALL Java_org_rocksdb_TypeUtil_getInternalKeyByteArray1(
    JNIEnv *env, jclass cls, jbyteArray user_key, jint user_key_off,
    jint user_key_len, jbyteArray int_key, jint int_key_off, jint int_key_len,
    jlong options_handle) {
  auto *options =
      reinterpret_cast<const ROCKSDB_NAMESPACE::Options *>(options_handle);
  const std::unique_ptr<char[]> target(new char[user_key_len]);
  if (target == nullptr) {
    jclass oom_class = env->FindClass("/java/lang/OutOfMemoryError");
    env->ThrowNew(oom_class,
                  "Memory allocation failed in RocksDB JNI function");
    return static_cast<jsize>(0);
  }
  env->GetByteArrayRegion(user_key, user_key_off, user_key_len,
                          reinterpret_cast<jbyte *>(target.get()));
  ROCKSDB_NAMESPACE::Slice target_slice(target.get(), user_key_len);
  std::string seek_key_buf;
  ROCKSDB_NAMESPACE::GetInternalKeyForSeek(target_slice, options->comparator,
                                           &seek_key_buf);
  ROCKSDB_NAMESPACE::Slice key_slice = seek_key_buf;
  auto slice_size = key_slice.size();
  jsize copy_size = std::min(static_cast<uint32_t>(slice_size),
                             static_cast<uint32_t>(int_key_len));
  env->SetByteArrayRegion(
      int_key, int_key_off, copy_size,
      const_cast<jbyte *>(reinterpret_cast<const jbyte *>(key_slice.data())));
  return static_cast<jsize>(slice_size);
}

/*
 * Class:     org_rocksdb_TypeUtil
 * Method:    getInternalKeyJni
 * Signature: ([BIJ)[B
 */
jbyteArray JNICALL Java_org_rocksdb_TypeUtil_getInternalKeyJni(
    JNIEnv *env, jclass cls, jbyteArray user_key, jint user_key_len,
    jlong options_handle) {
  jbyte *target = env->GetByteArrayElements(user_key, nullptr);
  if (target == nullptr) {
    // exception thrown: OutOfMemoryError
    return nullptr;
  }
  auto *options =
      reinterpret_cast<const ROCKSDB_NAMESPACE::Options *>(options_handle);
  ROCKSDB_NAMESPACE::Slice target_slice(reinterpret_cast<char *>(target),
                                        user_key_len);
  std::string seek_key_buf;
  ROCKSDB_NAMESPACE::GetInternalKeyForSeek(target_slice, options->comparator,
                                           &seek_key_buf);
  ROCKSDB_NAMESPACE::Slice key_slice = seek_key_buf;
  jbyteArray jkey = env->NewByteArray(static_cast<jsize>(key_slice.size()));
  if (jkey == nullptr) {
    // exception thrown: OutOfMemoryError
    return nullptr;
  }
  env->SetByteArrayRegion(
      jkey, 0, static_cast<jsize>(key_slice.size()),
      const_cast<jbyte *>(reinterpret_cast<const jbyte *>(key_slice.data())));
  return jkey;
}

/*
 * Class:     org_rocksdb_TypeUtil
 * Method:    getInternalKeyDirectForPrev0
 * Signature: (Ljava/nio/ByteBuffer;IILjava/nio/ByteBuffer;IIJ)I
 */
jint JNICALL Java_org_rocksdb_TypeUtil_getInternalKeyDirectForPrev0(
    JNIEnv *env, jclass /*clz*/, jobject user_key, jint user_key_off,
    jint user_key_len, jobject int_key, jint int_key_off, jint int_key_len,
    jlong options_handle) {
  auto *options =
      reinterpret_cast<const ROCKSDB_NAMESPACE::Options *>(options_handle);
  std::string seek_key_buf;
  auto getInternalKeySeek = [&seek_key_buf,
                             &options](ROCKSDB_NAMESPACE::Slice &target_slice) {
    ROCKSDB_NAMESPACE::GetInternalKeyForSeekForPrev(
        target_slice, options->comparator, &seek_key_buf);
  };
  ROCKSDB_NAMESPACE::JniUtil::k_op_direct(getInternalKeySeek, env, user_key,
                                          user_key_off, user_key_len);
  ROCKSDB_NAMESPACE::Slice key_slice = seek_key_buf;
  return ROCKSDB_NAMESPACE::JniUtil::copyToDirect(env, key_slice, int_key,
                                                  int_key_off, int_key_len);
}

/*
 * Class:     org_rocksdb_TypeUtil
 * Method:    getInternalKeyByteArrayForPrev0
 * Signature: ([BIILjava/nio/ByteBuffer;IIJ)I
 */
jint JNICALL Java_org_rocksdb_TypeUtil_getInternalKeyByteArrayForPrev0(
    JNIEnv *env, jclass /*clz*/, jbyteArray user_key, jint user_key_off,
    jint user_key_len, jobject int_key, jint int_key_off, jint int_key_len,
    jlong options_handle) {
  auto *options =
      reinterpret_cast<const ROCKSDB_NAMESPACE::Options *>(options_handle);
  const std::unique_ptr<char[]> target(new char[user_key_len]);
  if (target == nullptr) {
    jclass oom_class = env->FindClass("/java/lang/OutOfMemoryError");
    env->ThrowNew(oom_class,
                  "Memory allocation failed in RocksDB JNI function");
    return static_cast<jsize>(0);
  }
  env->GetByteArrayRegion(user_key, user_key_off, user_key_len,
                          reinterpret_cast<jbyte *>(target.get()));
  ROCKSDB_NAMESPACE::Slice target_slice(target.get(), user_key_len);
  std::string seek_key_buf;
  ROCKSDB_NAMESPACE::GetInternalKeyForSeekForPrev(
      target_slice, options->comparator, &seek_key_buf);
  ROCKSDB_NAMESPACE::Slice key_slice = seek_key_buf;
  return ROCKSDB_NAMESPACE::JniUtil::copyToDirect(env, key_slice, int_key,
                                                  int_key_off, int_key_len);
}

/*
 * Class:     org_rocksdb_TypeUtil
 * Method:    getInternalKeyDirectForPrev1
 * Signature: (Ljava/nio/ByteBuffer;II[BIIJ)I
 */
jint JNICALL Java_org_rocksdb_TypeUtil_getInternalKeyDirectForPrev1(
    JNIEnv *env, jclass cls, jobject user_key, jint user_key_off,
    jint user_key_len, jbyteArray int_key, jint int_key_off, jint int_key_len,
    jlong options_handle) {
  auto *options =
      reinterpret_cast<const ROCKSDB_NAMESPACE::Options *>(options_handle);
  std::string seek_key_buf;
  auto getInternalKeySeek = [&seek_key_buf,
                             &options](ROCKSDB_NAMESPACE::Slice &target_slice) {
    ROCKSDB_NAMESPACE::GetInternalKeyForSeekForPrev(
        target_slice, options->comparator, &seek_key_buf);
  };
  ROCKSDB_NAMESPACE::JniUtil::k_op_direct(getInternalKeySeek, env, user_key,
                                          user_key_off, user_key_len);
  ROCKSDB_NAMESPACE::Slice key_slice = seek_key_buf;
  auto slice_size = key_slice.size();
  jsize copy_size = std::min(static_cast<uint32_t>(slice_size),
                             static_cast<uint32_t>(int_key_len));
  env->SetByteArrayRegion(
      int_key, int_key_off, copy_size,
      const_cast<jbyte *>(reinterpret_cast<const jbyte *>(key_slice.data())));
  return static_cast<jsize>(slice_size);
}

/*
 * Class:     org_rocksdb_TypeUtil
 * Method:    getInternalKeyByteArrayForPrev1
 * Signature: ([BII[BIIJ)I
 */
jint JNICALL Java_org_rocksdb_TypeUtil_getInternalKeyByteArrayForPrev1(
    JNIEnv *env, jclass cls, jbyteArray user_key, jint user_key_off,
    jint user_key_len, jbyteArray int_key, jint int_key_off, jint int_key_len,
    jlong options_handle) {
  auto *options =
      reinterpret_cast<const ROCKSDB_NAMESPACE::Options *>(options_handle);
  const std::unique_ptr<char[]> target(new char[user_key_len]);
  if (target == nullptr) {
    jclass oom_class = env->FindClass("/java/lang/OutOfMemoryError");
    env->ThrowNew(oom_class,
                  "Memory allocation failed in RocksDB JNI function");
    return static_cast<jsize>(0);
  }
  env->GetByteArrayRegion(user_key, user_key_off, user_key_len,
                          reinterpret_cast<jbyte *>(target.get()));
  ROCKSDB_NAMESPACE::Slice target_slice(target.get(), user_key_len);
  std::string seek_key_buf;
  ROCKSDB_NAMESPACE::GetInternalKeyForSeekForPrev(
      target_slice, options->comparator, &seek_key_buf);
  ROCKSDB_NAMESPACE::Slice key_slice = seek_key_buf;
  auto slice_size = key_slice.size();
  jsize copy_size = std::min(static_cast<uint32_t>(slice_size),
                             static_cast<uint32_t>(int_key_len));
  env->SetByteArrayRegion(
      int_key, int_key_off, copy_size,
      const_cast<jbyte *>(reinterpret_cast<const jbyte *>(key_slice.data())));
  return static_cast<jsize>(slice_size);
}

/*
 * Class:     org_rocksdb_TypeUtil
 * Method:    getInternalKeyForPrevJni
 * Signature: ([BIJ)[B
 */
jbyteArray JNICALL Java_org_rocksdb_TypeUtil_getInternalKeyForPrevJni(
    JNIEnv *env, jclass cls, jbyteArray user_key, jint user_key_len,
    jlong options_handle) {
  jbyte *target = env->GetByteArrayElements(user_key, nullptr);
  if (target == nullptr) {
    // exception thrown: OutOfMemoryError
    return nullptr;
  }
  auto *options =
      reinterpret_cast<const ROCKSDB_NAMESPACE::Options *>(options_handle);
  ROCKSDB_NAMESPACE::Slice target_slice(reinterpret_cast<char *>(target),
                                        user_key_len);
  std::string seek_key_buf;
  ROCKSDB_NAMESPACE::GetInternalKeyForSeekForPrev(
      target_slice, options->comparator, &seek_key_buf);
  ROCKSDB_NAMESPACE::Slice key_slice = seek_key_buf;
  jbyteArray jkey = env->NewByteArray(static_cast<jsize>(key_slice.size()));
  if (jkey == nullptr) {
    // exception thrown: OutOfMemoryError
    return nullptr;
  }
  env->SetByteArrayRegion(
      jkey, 0, static_cast<jsize>(key_slice.size()),
      const_cast<jbyte *>(reinterpret_cast<const jbyte *>(key_slice.data())));
  return jkey;
}
