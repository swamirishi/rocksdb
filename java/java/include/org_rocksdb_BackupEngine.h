/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_rocksdb_BackupEngine */

#ifndef _Included_org_rocksdb_BackupEngine
#define _Included_org_rocksdb_BackupEngine
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_rocksdb_BackupEngine
 * Method:    open
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_BackupEngine_open
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_rocksdb_BackupEngine
 * Method:    createNewBackup
 * Signature: (JJZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_BackupEngine_createNewBackup
  (JNIEnv *, jclass, jlong, jlong, jboolean);

/*
 * Class:     org_rocksdb_BackupEngine
 * Method:    createNewBackupWithMetadata
 * Signature: (JJLjava/lang/String;Z)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_BackupEngine_createNewBackupWithMetadata
  (JNIEnv *, jclass, jlong, jlong, jstring, jboolean);

/*
 * Class:     org_rocksdb_BackupEngine
 * Method:    getBackupInfo
 * Signature: (J)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_org_rocksdb_BackupEngine_getBackupInfo
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_BackupEngine
 * Method:    getCorruptedBackups
 * Signature: (J)[I
 */
JNIEXPORT jintArray JNICALL Java_org_rocksdb_BackupEngine_getCorruptedBackups
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_BackupEngine
 * Method:    garbageCollect
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_BackupEngine_garbageCollect
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_BackupEngine
 * Method:    purgeOldBackups
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_BackupEngine_purgeOldBackups
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_rocksdb_BackupEngine
 * Method:    deleteBackup
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_BackupEngine_deleteBackup
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_rocksdb_BackupEngine
 * Method:    restoreDbFromBackup
 * Signature: (JILjava/lang/String;Ljava/lang/String;J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_BackupEngine_restoreDbFromBackup
  (JNIEnv *, jclass, jlong, jint, jstring, jstring, jlong);

/*
 * Class:     org_rocksdb_BackupEngine
 * Method:    restoreDbFromLatestBackup
 * Signature: (JLjava/lang/String;Ljava/lang/String;J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_BackupEngine_restoreDbFromLatestBackup
  (JNIEnv *, jclass, jlong, jstring, jstring, jlong);

/*
 * Class:     org_rocksdb_BackupEngine
 * Method:    disposeInternalJni
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_BackupEngine_disposeInternalJni
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
