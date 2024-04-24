/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_rocksdb_CompressionOptions */

#ifndef _Included_org_rocksdb_CompressionOptions
#define _Included_org_rocksdb_CompressionOptions
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_rocksdb_CompressionOptions
 * Method:    newCompressionOptions
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_CompressionOptions_newCompressionOptions
  (JNIEnv *, jclass);

/*
 * Class:     org_rocksdb_CompressionOptions
 * Method:    disposeInternalJni
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_CompressionOptions_disposeInternalJni
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_CompressionOptions
 * Method:    setWindowBits
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_CompressionOptions_setWindowBits
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_rocksdb_CompressionOptions
 * Method:    windowBits
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_CompressionOptions_windowBits
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_CompressionOptions
 * Method:    setLevel
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_CompressionOptions_setLevel
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_rocksdb_CompressionOptions
 * Method:    level
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_CompressionOptions_level
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_CompressionOptions
 * Method:    setStrategy
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_CompressionOptions_setStrategy
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_rocksdb_CompressionOptions
 * Method:    strategy
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_CompressionOptions_strategy
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_CompressionOptions
 * Method:    setMaxDictBytes
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_CompressionOptions_setMaxDictBytes
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_rocksdb_CompressionOptions
 * Method:    maxDictBytes
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_CompressionOptions_maxDictBytes
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_CompressionOptions
 * Method:    setZstdMaxTrainBytes
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_CompressionOptions_setZstdMaxTrainBytes
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_rocksdb_CompressionOptions
 * Method:    zstdMaxTrainBytes
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_CompressionOptions_zstdMaxTrainBytes
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_CompressionOptions
 * Method:    setEnabled
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_CompressionOptions_setEnabled
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     org_rocksdb_CompressionOptions
 * Method:    enabled
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_CompressionOptions_enabled
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
