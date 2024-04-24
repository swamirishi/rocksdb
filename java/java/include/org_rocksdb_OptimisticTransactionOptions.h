/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_rocksdb_OptimisticTransactionOptions */

#ifndef _Included_org_rocksdb_OptimisticTransactionOptions
#define _Included_org_rocksdb_OptimisticTransactionOptions
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_rocksdb_OptimisticTransactionOptions
 * Method:    newOptimisticTransactionOptions
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_OptimisticTransactionOptions_newOptimisticTransactionOptions
  (JNIEnv *, jclass);

/*
 * Class:     org_rocksdb_OptimisticTransactionOptions
 * Method:    isSetSnapshot
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_OptimisticTransactionOptions_isSetSnapshot
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_OptimisticTransactionOptions
 * Method:    setSetSnapshot
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_OptimisticTransactionOptions_setSetSnapshot
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     org_rocksdb_OptimisticTransactionOptions
 * Method:    setComparator
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_OptimisticTransactionOptions_setComparator
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_rocksdb_OptimisticTransactionOptions
 * Method:    disposeInternalJni
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_OptimisticTransactionOptions_disposeInternalJni
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
