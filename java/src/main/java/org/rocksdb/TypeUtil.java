package org.rocksdb;

import java.nio.ByteBuffer;

public class TypeUtil {

  public static byte[] getInternalKey(byte[] userKey) {
    return getInternalKeyJni(userKey, userKey.length);
  }

  public static int getInternalKey(ByteBuffer userKey, ByteBuffer internalKey) {
    int result;
    if (userKey.isDirect()) {
      if (internalKey.isDirect()) {
        result = getInternalKeyDirect0(userKey, userKey.position(), userKey.remaining(), internalKey,
                internalKey.position(),
                internalKey.remaining());
      } else {
        result = getInternalKeyDirect1(userKey, userKey.position(), userKey.remaining(), internalKey.array(),
                internalKey.arrayOffset() + internalKey.position(), internalKey.remaining());
      }
    } else {
      if (internalKey.isDirect()) {
        result = getInternalKeyByteArray0(userKey.array(), userKey.arrayOffset() + userKey.position(),
                userKey.remaining(), internalKey, internalKey.position(), internalKey.remaining());
      } else {
        result = getInternalKeyByteArray1(userKey.array(), userKey.arrayOffset() + userKey.position(),
                userKey.remaining(), internalKey.array(), internalKey.arrayOffset() + internalKey.position(),
                internalKey.remaining());
      }
    }
    internalKey.limit(Math.min(internalKey.position() + result, internalKey.limit()));
    return result;
  }

  private static native int getInternalKeyDirect0(ByteBuffer userKey, int userKeyOffset, int userKeyLen,
                                                 ByteBuffer internalKey, int internalKeyOffset, int internalKeyLen);
  private static native int getInternalKeyByteArray0(byte[] userKey, int userKeyOffset, int userKeyLen,
                                                    ByteBuffer internalKey, int internalKeyOffset, int internalKeyLen);
  private static native int getInternalKeyDirect1(ByteBuffer userKey, int userKeyOffset, int userKeyLen,
                                                  byte[] internalKey, int internalKeyOffset, int internalKeyLen);
  private static native int getInternalKeyByteArray1(byte[] userKey, int userKeyOffset, int userKeyLen,
                                                     byte[] internalKey, int internalKeyOffset, int internalKeyLen);
  private static native byte[] getInternalKeyJni(byte[] userKey, int userKeyLen);
}
