/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_zeromq_czmq_Zuuid */

#ifndef _Included_org_zeromq_czmq_Zuuid
#define _Included_org_zeromq_czmq_Zuuid
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_zeromq_czmq_Zuuid
 * Method:    __new
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_zeromq_czmq_Zuuid__1_1new
  (JNIEnv *, jclass);

/*
 * Class:     org_zeromq_czmq_Zuuid
 * Method:    __newFrom
 * Signature: ([B)J
 */
JNIEXPORT jlong JNICALL Java_org_zeromq_czmq_Zuuid__1_1newFrom
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     org_zeromq_czmq_Zuuid
 * Method:    __destroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_czmq_Zuuid__1_1destroy
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zeromq_czmq_Zuuid
 * Method:    __set
 * Signature: (J[B)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_czmq_Zuuid__1_1set
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     org_zeromq_czmq_Zuuid
 * Method:    __setStr
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_zeromq_czmq_Zuuid__1_1setStr
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_zeromq_czmq_Zuuid
 * Method:    __data
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_zeromq_czmq_Zuuid__1_1data
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zeromq_czmq_Zuuid
 * Method:    __size
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_zeromq_czmq_Zuuid__1_1size
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zeromq_czmq_Zuuid
 * Method:    __str
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_zeromq_czmq_Zuuid__1_1str
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zeromq_czmq_Zuuid
 * Method:    __strCanonical
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_zeromq_czmq_Zuuid__1_1strCanonical
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zeromq_czmq_Zuuid
 * Method:    __export
 * Signature: (J[B)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_czmq_Zuuid__1_1export
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     org_zeromq_czmq_Zuuid
 * Method:    __eq
 * Signature: (J[B)Z
 */
JNIEXPORT jboolean JNICALL Java_org_zeromq_czmq_Zuuid__1_1eq
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     org_zeromq_czmq_Zuuid
 * Method:    __neq
 * Signature: (J[B)Z
 */
JNIEXPORT jboolean JNICALL Java_org_zeromq_czmq_Zuuid__1_1neq
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     org_zeromq_czmq_Zuuid
 * Method:    __dup
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_zeromq_czmq_Zuuid__1_1dup
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zeromq_czmq_Zuuid
 * Method:    __test
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_czmq_Zuuid__1_1test
  (JNIEnv *, jclass, jboolean);

#ifdef __cplusplus
}
#endif
#endif
