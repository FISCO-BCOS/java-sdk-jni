/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_fisco_bcos_sdk_jni_amop_Amop */

#ifndef _Included_org_fisco_bcos_sdk_jni_amop_Amop
#define _Included_org_fisco_bcos_sdk_jni_amop_Amop
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_fisco_bcos_sdk_jni_amop_Amop
 * Method:    newNativeObj
 * Signature: (Lorg/fisco/bcos/sdk/jni/common/JniConfig;)J
 */
JNIEXPORT jlong JNICALL Java_org_fisco_bcos_sdk_jni_amop_Amop_newNativeObj
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_fisco_bcos_sdk_jni_amop_Amop
 * Method:    start
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_fisco_bcos_sdk_jni_amop_Amop_start
  (JNIEnv *, jobject);

/*
 * Class:     org_fisco_bcos_sdk_jni_amop_Amop
 * Method:    stop
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_fisco_bcos_sdk_jni_amop_Amop_stop
  (JNIEnv *, jobject);

/*
 * Class:     org_fisco_bcos_sdk_jni_amop_Amop
 * Method:    subscribeTopic
 * Signature: (Ljava/util/Set;)V
 */
JNIEXPORT void JNICALL Java_org_fisco_bcos_sdk_jni_amop_Amop_subscribeTopic__Ljava_util_Set_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_fisco_bcos_sdk_jni_amop_Amop
 * Method:    subscribeTopic
 * Signature: (Ljava/lang/String;Lorg/fisco/bcos/sdk/jni/amop/AmopCallback;)V
 */
JNIEXPORT void JNICALL Java_org_fisco_bcos_sdk_jni_amop_Amop_subscribeTopic__Ljava_lang_String_2Lorg_fisco_bcos_sdk_jni_amop_AmopCallback_2
  (JNIEnv *, jobject, jstring, jobject);

/*
 * Class:     org_fisco_bcos_sdk_jni_amop_Amop
 * Method:    unsubscribeTopic
 * Signature: (Ljava/util/Set;)V
 */
JNIEXPORT void JNICALL Java_org_fisco_bcos_sdk_jni_amop_Amop_unsubscribeTopic
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_fisco_bcos_sdk_jni_amop_Amop
 * Method:    setCallback
 * Signature: (Lorg/fisco/bcos/sdk/jni/amop/AmopCallback;)V
 */
JNIEXPORT void JNICALL Java_org_fisco_bcos_sdk_jni_amop_Amop_setCallback
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_fisco_bcos_sdk_jni_amop_Amop
 * Method:    getCallback
 * Signature: (Lorg/fisco/bcos/sdk/jni/amop/AmopCallback;)Lorg/fisco/bcos/sdk/jni/amop/AmopCallback;
 */
JNIEXPORT jobject JNICALL Java_org_fisco_bcos_sdk_jni_amop_Amop_getCallback
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_fisco_bcos_sdk_jni_amop_Amop
 * Method:    sendAmopMsg
 * Signature: ([BLorg/fisco/bcos/sdk/jni/amop/AmopResponseCallback;)V
 */
JNIEXPORT void JNICALL Java_org_fisco_bcos_sdk_jni_amop_Amop_sendAmopMsg
  (JNIEnv *, jobject, jbyteArray, jobject);

/*
 * Class:     org_fisco_bcos_sdk_jni_amop_Amop
 * Method:    broadcastAmopMsg
 * Signature: ([B)V
 */
JNIEXPORT void JNICALL Java_org_fisco_bcos_sdk_jni_amop_Amop_broadcastAmopMsg
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     org_fisco_bcos_sdk_jni_amop_Amop
 * Method:    getSubTopics
 * Signature: ()Ljava/util/Set;
 */
JNIEXPORT jobject JNICALL Java_org_fisco_bcos_sdk_jni_amop_Amop_getSubTopics
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
