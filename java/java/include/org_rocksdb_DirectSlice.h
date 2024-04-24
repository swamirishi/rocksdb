/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_rocksdb_DirectSlice */

#ifndef _Included_org_rocksdb_DirectSlice
#define _Included_org_rocksdb_DirectSlice
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_rocksdb_DirectSlice
 * Method:    createNewDirectSlice0
 * Signature: (Ljava/nio/ByteBuffer;I)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_DirectSlice_createNewDirectSlice0
  (JNIEnv *, jclass, jobject, jint);

/*
 * Class:     org_rocksdb_DirectSlice
 * Method:    createNewDirectSlice1
 * Signature: (Ljava/nio/ByteBuffer;)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_DirectSlice_createNewDirectSlice1
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_rocksdb_DirectSlice
 * Method:    data0
 * Signature: (J)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_org_rocksdb_DirectSlice_data0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DirectSlice
 * Method:    get0
 * Signature: (JI)B
 */
JNIEXPORT jbyte JNICALL Java_org_rocksdb_DirectSlice_get0
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_rocksdb_DirectSlice
 * Method:    clear0
 * Signature: (JZJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DirectSlice_clear0
  (JNIEnv *, jclass, jlong, jboolean, jlong);

/*
 * Class:     org_rocksdb_DirectSlice
 * Method:    removePrefix0
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DirectSlice_removePrefix0
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_rocksdb_DirectSlice
 * Method:    setLength0
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DirectSlice_setLength0
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_rocksdb_DirectSlice
 * Method:    disposeInternalBuf
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DirectSlice_disposeInternalBuf
  (JNIEnv *, jclass, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif
