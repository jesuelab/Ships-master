/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_videgro_ships_bridge_NativeRtlSdr */

#ifndef _Included_net_videgro_ships_bridge_NativeRtlSdr
#define _Included_net_videgro_ships_bridge_NativeRtlSdr
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     net_videgro_ships_bridge_NativeRtlSdr
 * Method:    startRtlSdrAis
 * Signature: (Ljava/lang/String;ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_videgro_ships_bridge_NativeRtlSdr_startRtlSdrAis
  (JNIEnv *, jobject, jstring, jint, jstring);

/*
 * Class:     net_videgro_ships_bridge_NativeRtlSdr
 * Method:    stopRtlSdrAis
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_videgro_ships_bridge_NativeRtlSdr_stopRtlSdrAis
  (JNIEnv *, jobject);

/*
 * Class:     net_videgro_ships_bridge_NativeRtlSdr
 * Method:    changeRtlSdrPpm
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_net_videgro_ships_bridge_NativeRtlSdr_changeRtlSdrPpm
  (JNIEnv *, jobject, jint);

/*
 * Class:     net_videgro_ships_bridge_NativeRtlSdr
 * Method:    isRunningRtlSdrAis
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_net_videgro_ships_bridge_NativeRtlSdr_isRunningRtlSdrAis
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
