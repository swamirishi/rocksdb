/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_rocksdb_Transaction */

#ifndef _Included_org_rocksdb_Transaction
#define _Included_org_rocksdb_Transaction
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_rocksdb_Transaction
 * Method:    setSnapshot
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_setSnapshot
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    setSnapshotOnNextOperation
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_setSnapshotOnNextOperation__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    setSnapshotOnNextOperation
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_setSnapshotOnNextOperation__JJ
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    getSnapshot
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_Transaction_getSnapshot
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    clearSnapshot
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_clearSnapshot
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    prepare
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_prepare
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    commit
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_commit
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    rollback
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_rollback
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    setSavePoint
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_setSavePoint
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    rollbackToSavePoint
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_rollbackToSavePoint
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    get
 * Signature: (JJ[BIIJ)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_rocksdb_Transaction_get__JJ_3BIIJ
  (JNIEnv *, jclass, jlong, jlong, jbyteArray, jint, jint, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    get
 * Signature: (JJ[BII[BIIJ)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_Transaction_get__JJ_3BII_3BIIJ
  (JNIEnv *, jclass, jlong, jlong, jbyteArray, jint, jint, jbyteArray, jint, jint, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    getDirect
 * Signature: (JJLjava/nio/ByteBuffer;IILjava/nio/ByteBuffer;IIJ)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_Transaction_getDirect
  (JNIEnv *, jclass, jlong, jlong, jobject, jint, jint, jobject, jint, jint, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    multiGet
 * Signature: (JJ[[B[J)[[B
 */
JNIEXPORT jobjectArray JNICALL Java_org_rocksdb_Transaction_multiGet__JJ_3_3B_3J
  (JNIEnv *, jclass, jlong, jlong, jobjectArray, jlongArray);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    multiGet
 * Signature: (JJ[[B)[[B
 */
JNIEXPORT jobjectArray JNICALL Java_org_rocksdb_Transaction_multiGet__JJ_3_3B
  (JNIEnv *, jclass, jlong, jlong, jobjectArray);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    getForUpdate
 * Signature: (JJ[BIIJZZ)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_rocksdb_Transaction_getForUpdate__JJ_3BIIJZZ
  (JNIEnv *, jclass, jlong, jlong, jbyteArray, jint, jint, jlong, jboolean, jboolean);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    getForUpdate
 * Signature: (JJ[BII[BIIJZZ)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_Transaction_getForUpdate__JJ_3BII_3BIIJZZ
  (JNIEnv *, jclass, jlong, jlong, jbyteArray, jint, jint, jbyteArray, jint, jint, jlong, jboolean, jboolean);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    getDirectForUpdate
 * Signature: (JJLjava/nio/ByteBuffer;IILjava/nio/ByteBuffer;IIJZZ)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_Transaction_getDirectForUpdate
  (JNIEnv *, jclass, jlong, jlong, jobject, jint, jint, jobject, jint, jint, jlong, jboolean, jboolean);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    multiGetForUpdate
 * Signature: (JJ[[B[J)[[B
 */
JNIEXPORT jobjectArray JNICALL Java_org_rocksdb_Transaction_multiGetForUpdate__JJ_3_3B_3J
  (JNIEnv *, jclass, jlong, jlong, jobjectArray, jlongArray);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    multiGetForUpdate
 * Signature: (JJ[[B)[[B
 */
JNIEXPORT jobjectArray JNICALL Java_org_rocksdb_Transaction_multiGetForUpdate__JJ_3_3B
  (JNIEnv *, jclass, jlong, jlong, jobjectArray);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    getIterator
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_Transaction_getIterator
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    put
 * Signature: (J[BII[BII)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_put__J_3BII_3BII
  (JNIEnv *, jclass, jlong, jbyteArray, jint, jint, jbyteArray, jint, jint);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    put
 * Signature: (J[BII[BIIJZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_put__J_3BII_3BIIJZ
  (JNIEnv *, jclass, jlong, jbyteArray, jint, jint, jbyteArray, jint, jint, jlong, jboolean);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    put
 * Signature: (J[[BI[[BIJZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_put__J_3_3BI_3_3BIJZ
  (JNIEnv *, jclass, jlong, jobjectArray, jint, jobjectArray, jint, jlong, jboolean);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    put
 * Signature: (J[[BI[[BI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_put__J_3_3BI_3_3BI
  (JNIEnv *, jclass, jlong, jobjectArray, jint, jobjectArray, jint);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    putDirect
 * Signature: (JLjava/nio/ByteBuffer;IILjava/nio/ByteBuffer;IIJZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_putDirect__JLjava_nio_ByteBuffer_2IILjava_nio_ByteBuffer_2IIJZ
  (JNIEnv *, jclass, jlong, jobject, jint, jint, jobject, jint, jint, jlong, jboolean);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    putDirect
 * Signature: (JLjava/nio/ByteBuffer;IILjava/nio/ByteBuffer;II)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_putDirect__JLjava_nio_ByteBuffer_2IILjava_nio_ByteBuffer_2II
  (JNIEnv *, jclass, jlong, jobject, jint, jint, jobject, jint, jint);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    merge
 * Signature: (J[BII[BIIJZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_merge__J_3BII_3BIIJZ
  (JNIEnv *, jclass, jlong, jbyteArray, jint, jint, jbyteArray, jint, jint, jlong, jboolean);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    mergeDirect
 * Signature: (JLjava/nio/ByteBuffer;IILjava/nio/ByteBuffer;IIJZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_mergeDirect__JLjava_nio_ByteBuffer_2IILjava_nio_ByteBuffer_2IIJZ
  (JNIEnv *, jclass, jlong, jobject, jint, jint, jobject, jint, jint, jlong, jboolean);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    mergeDirect
 * Signature: (JLjava/nio/ByteBuffer;IILjava/nio/ByteBuffer;II)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_mergeDirect__JLjava_nio_ByteBuffer_2IILjava_nio_ByteBuffer_2II
  (JNIEnv *, jclass, jlong, jobject, jint, jint, jobject, jint, jint);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    merge
 * Signature: (J[BII[BII)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_merge__J_3BII_3BII
  (JNIEnv *, jclass, jlong, jbyteArray, jint, jint, jbyteArray, jint, jint);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    delete
 * Signature: (J[BIJZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_delete__J_3BIJZ
  (JNIEnv *, jclass, jlong, jbyteArray, jint, jlong, jboolean);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    delete
 * Signature: (J[BI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_delete__J_3BI
  (JNIEnv *, jclass, jlong, jbyteArray, jint);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    delete
 * Signature: (J[[BIJZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_delete__J_3_3BIJZ
  (JNIEnv *, jclass, jlong, jobjectArray, jint, jlong, jboolean);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    delete
 * Signature: (J[[BI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_delete__J_3_3BI
  (JNIEnv *, jclass, jlong, jobjectArray, jint);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    singleDelete
 * Signature: (J[BIJZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_singleDelete__J_3BIJZ
  (JNIEnv *, jclass, jlong, jbyteArray, jint, jlong, jboolean);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    singleDelete
 * Signature: (J[BI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_singleDelete__J_3BI
  (JNIEnv *, jclass, jlong, jbyteArray, jint);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    singleDelete
 * Signature: (J[[BIJZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_singleDelete__J_3_3BIJZ
  (JNIEnv *, jclass, jlong, jobjectArray, jint, jlong, jboolean);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    singleDelete
 * Signature: (J[[BI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_singleDelete__J_3_3BI
  (JNIEnv *, jclass, jlong, jobjectArray, jint);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    putUntracked
 * Signature: (J[BI[BIJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_putUntracked__J_3BI_3BIJ
  (JNIEnv *, jclass, jlong, jbyteArray, jint, jbyteArray, jint, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    putUntracked
 * Signature: (J[BI[BI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_putUntracked__J_3BI_3BI
  (JNIEnv *, jclass, jlong, jbyteArray, jint, jbyteArray, jint);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    putUntracked
 * Signature: (J[[BI[[BIJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_putUntracked__J_3_3BI_3_3BIJ
  (JNIEnv *, jclass, jlong, jobjectArray, jint, jobjectArray, jint, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    putUntracked
 * Signature: (J[[BI[[BI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_putUntracked__J_3_3BI_3_3BI
  (JNIEnv *, jclass, jlong, jobjectArray, jint, jobjectArray, jint);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    mergeUntracked
 * Signature: (J[BII[BIIJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_mergeUntracked
  (JNIEnv *, jclass, jlong, jbyteArray, jint, jint, jbyteArray, jint, jint, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    mergeUntrackedDirect
 * Signature: (JLjava/nio/ByteBuffer;IILjava/nio/ByteBuffer;IIJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_mergeUntrackedDirect
  (JNIEnv *, jclass, jlong, jobject, jint, jint, jobject, jint, jint, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    deleteUntracked
 * Signature: (J[BIJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_deleteUntracked__J_3BIJ
  (JNIEnv *, jclass, jlong, jbyteArray, jint, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    deleteUntracked
 * Signature: (J[BI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_deleteUntracked__J_3BI
  (JNIEnv *, jclass, jlong, jbyteArray, jint);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    deleteUntracked
 * Signature: (J[[BIJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_deleteUntracked__J_3_3BIJ
  (JNIEnv *, jclass, jlong, jobjectArray, jint, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    deleteUntracked
 * Signature: (J[[BI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_deleteUntracked__J_3_3BI
  (JNIEnv *, jclass, jlong, jobjectArray, jint);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    putLogData
 * Signature: (J[BI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_putLogData
  (JNIEnv *, jclass, jlong, jbyteArray, jint);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    disableIndexing
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_disableIndexing
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    enableIndexing
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_enableIndexing
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    getNumKeys
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_Transaction_getNumKeys
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    getNumPuts
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_Transaction_getNumPuts
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    getNumDeletes
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_Transaction_getNumDeletes
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    getNumMerges
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_Transaction_getNumMerges
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    getElapsedTime
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_Transaction_getElapsedTime
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    getWriteBatch
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_Transaction_getWriteBatch
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    setLockTimeout
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_setLockTimeout
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    getWriteOptions
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_Transaction_getWriteOptions
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    setWriteOptions
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_setWriteOptions
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    undoGetForUpdate
 * Signature: (J[BIJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_undoGetForUpdate__J_3BIJ
  (JNIEnv *, jclass, jlong, jbyteArray, jint, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    undoGetForUpdate
 * Signature: (J[BI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_undoGetForUpdate__J_3BI
  (JNIEnv *, jclass, jlong, jbyteArray, jint);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    rebuildFromWriteBatch
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_rebuildFromWriteBatch
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    getCommitTimeWriteBatch
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_Transaction_getCommitTimeWriteBatch
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    setLogNumber
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_setLogNumber
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    getLogNumber
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_Transaction_getLogNumber
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    setName
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_setName
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    getName
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_rocksdb_Transaction_getName
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    getID
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_Transaction_getID
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    isDeadlockDetect
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_Transaction_isDeadlockDetect
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    getWaitingTxns
 * Signature: (J)Lorg/rocksdb/Transaction/WaitingTransactions;
 */
JNIEXPORT jobject JNICALL Java_org_rocksdb_Transaction_getWaitingTxns
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    getState
 * Signature: (J)B
 */
JNIEXPORT jbyte JNICALL Java_org_rocksdb_Transaction_getState
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    getId
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_Transaction_getId
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_Transaction
 * Method:    disposeInternal
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_Transaction_disposeInternal
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
