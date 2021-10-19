/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_fisco_bcos_sdk_jni_event_EventSubscribe */

#ifndef _Included_org_fisco_bcos_sdk_jni_event_EventSubscribe
#define _Included_org_fisco_bcos_sdk_jni_event_EventSubscribe
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_fisco_bcos_sdk_jni_event_EventSubscribe
 * Method:    newNativeObj
 * Signature: (Lorg/fisco/bcos/sdk/jni/common/JniConfig;)J
 */
JNIEXPORT jlong JNICALL Java_org_fisco_bcos_sdk_jni_event_EventSubscribe_newNativeObj
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_fisco_bcos_sdk_jni_event_EventSubscribe
 * Method:    start
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_fisco_bcos_sdk_jni_event_EventSubscribe_start
  (JNIEnv *, jobject);

/*
 * Class:     org_fisco_bcos_sdk_jni_event_EventSubscribe
 * Method:    stop
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_fisco_bcos_sdk_jni_event_EventSubscribe_stop
  (JNIEnv *, jobject);

/*
 * Class:     org_fisco_bcos_sdk_jni_event_EventSubscribe
 * Method:    subscribeEvent
 * Signature: (Ljava/lang/String;Lorg/fisco/bcos/sdk/jni/event/EventSubscribeCallback;)V
 */
JNIEXPORT void JNICALL Java_org_fisco_bcos_sdk_jni_event_EventSubscribe_subscribeEvent
  (JNIEnv *, jobject, jstring, jobject);

/*
 * Class:     org_fisco_bcos_sdk_jni_event_EventSubscribe
 * Method:    unsubscribeEvent
 * Signature: (Ljava/lang/String;Lorg/fisco/bcos/sdk/jni/event/EventSubscribeCallback;)V
 */
JNIEXPORT void JNICALL Java_org_fisco_bcos_sdk_jni_event_EventSubscribe_unsubscribeEvent
  (JNIEnv *, jobject, jstring, jobject);

/*
 * Class:     org_fisco_bcos_sdk_jni_event_EventSubscribe
 * Method:    getAllSubscribedEvents
 * Signature: ()Ljava/util/Set;
 */
JNIEXPORT jobject JNICALL Java_org_fisco_bcos_sdk_jni_event_EventSubscribe_getAllSubscribedEvents
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
