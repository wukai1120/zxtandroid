/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_android_serial_camera */

#ifndef _Included_com_android_serial_camera
#define _Included_com_android_serial_camera
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_android_serial_camera
 * Method:    uart_init0
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_android_serial_1camera_uart_1init0
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_android_serial_camera
 * Method:    photo_init
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_android_serial_1camera_photo_1init
  (JNIEnv *, jobject);

/*
 * Class:     com_android_serial_camera
 * Method:    take_photo_cmd
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_android_serial_1camera_take_1photo_1cmd
  (JNIEnv *, jobject);

/*
 * Class:     com_android_serial_camera
 * Method:    take_photo
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_android_serial_1camera_take_1photo
  (JNIEnv *, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif
