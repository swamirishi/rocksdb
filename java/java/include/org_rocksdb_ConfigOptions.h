/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_rocksdb_ConfigOptions */

#ifndef _Included_org_rocksdb_ConfigOptions
#define _Included_org_rocksdb_ConfigOptions
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_rocksdb_ConfigOptions
 * Method:    disposeInternalJni
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_ConfigOptions_disposeInternalJni
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_ConfigOptions
 * Method:    newConfigOptions
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_ConfigOptions_newConfigOptions
  (JNIEnv *, jclass);

/*
 * Class:     org_rocksdb_ConfigOptions
 * Method:    setEnv
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_ConfigOptions_setEnv
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_rocksdb_ConfigOptions
 * Method:    setDelimiter
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_ConfigOptions_setDelimiter
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_rocksdb_ConfigOptions
 * Method:    setIgnoreUnknownOptions
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_ConfigOptions_setIgnoreUnknownOptions
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     org_rocksdb_ConfigOptions
 * Method:    setInputStringsEscaped
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_ConfigOptions_setInputStringsEscaped
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     org_rocksdb_ConfigOptions
 * Method:    setSanityLevel
 * Signature: (JB)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_ConfigOptions_setSanityLevel
  (JNIEnv *, jclass, jlong, jbyte);

#ifdef __cplusplus
}
#endif
#endif
