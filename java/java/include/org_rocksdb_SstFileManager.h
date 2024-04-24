/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_rocksdb_SstFileManager */

#ifndef _Included_org_rocksdb_SstFileManager
#define _Included_org_rocksdb_SstFileManager
#ifdef __cplusplus
extern "C" {
#endif
#undef org_rocksdb_SstFileManager_RATE_BYTES_PER_SEC_DEFAULT
#define org_rocksdb_SstFileManager_RATE_BYTES_PER_SEC_DEFAULT 0LL
#undef org_rocksdb_SstFileManager_DELETE_EXISTING_TRASH_DEFAULT
#define org_rocksdb_SstFileManager_DELETE_EXISTING_TRASH_DEFAULT 1L
#undef org_rocksdb_SstFileManager_MAX_TRASH_DB_RATION_DEFAULT
#define org_rocksdb_SstFileManager_MAX_TRASH_DB_RATION_DEFAULT 0.25
#undef org_rocksdb_SstFileManager_BYTES_MAX_DELETE_CHUNK_DEFAULT
#define org_rocksdb_SstFileManager_BYTES_MAX_DELETE_CHUNK_DEFAULT 67108864LL
/*
 * Class:     org_rocksdb_SstFileManager
 * Method:    newSstFileManager
 * Signature: (JJJDJ)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_SstFileManager_newSstFileManager
  (JNIEnv *, jclass, jlong, jlong, jlong, jdouble, jlong);

/*
 * Class:     org_rocksdb_SstFileManager
 * Method:    setMaxAllowedSpaceUsage
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_SstFileManager_setMaxAllowedSpaceUsage
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_rocksdb_SstFileManager
 * Method:    setCompactionBufferSize
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_SstFileManager_setCompactionBufferSize
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_rocksdb_SstFileManager
 * Method:    isMaxAllowedSpaceReached
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_SstFileManager_isMaxAllowedSpaceReached
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_SstFileManager
 * Method:    isMaxAllowedSpaceReachedIncludingCompactions
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_SstFileManager_isMaxAllowedSpaceReachedIncludingCompactions
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_SstFileManager
 * Method:    getTotalSize
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_SstFileManager_getTotalSize
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_SstFileManager
 * Method:    getTrackedFiles
 * Signature: (J)Ljava/util/Map;
 */
JNIEXPORT jobject JNICALL Java_org_rocksdb_SstFileManager_getTrackedFiles
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_SstFileManager
 * Method:    getDeleteRateBytesPerSecond
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_SstFileManager_getDeleteRateBytesPerSecond
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_SstFileManager
 * Method:    setDeleteRateBytesPerSecond
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_SstFileManager_setDeleteRateBytesPerSecond
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_rocksdb_SstFileManager
 * Method:    getMaxTrashDBRatio
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_rocksdb_SstFileManager_getMaxTrashDBRatio
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_SstFileManager
 * Method:    setMaxTrashDBRatio
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_SstFileManager_setMaxTrashDBRatio
  (JNIEnv *, jclass, jlong, jdouble);

/*
 * Class:     org_rocksdb_SstFileManager
 * Method:    disposeInternalJni
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_SstFileManager_disposeInternalJni
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
