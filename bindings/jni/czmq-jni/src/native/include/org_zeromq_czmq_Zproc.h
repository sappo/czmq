/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_zeromq_czmq_Zproc */

#ifndef _Included_org_zeromq_czmq_Zproc
#define _Included_org_zeromq_czmq_Zproc
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_zeromq_czmq_Zproc
 * Method:    __new
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_zeromq_czmq_Zproc__1_1new
  (JNIEnv *, jclass);

/*
 * Class:     org_zeromq_czmq_Zproc
 * Method:    __destroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_czmq_Zproc__1_1destroy
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zeromq_czmq_Zproc
 * Method:    __args
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_zeromq_czmq_Zproc__1_1args
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zeromq_czmq_Zproc
 * Method:    __setArgs
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_czmq_Zproc__1_1setArgs
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_zeromq_czmq_Zproc
 * Method:    __setArgsx
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_czmq_Zproc__1_1setArgsx
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_zeromq_czmq_Zproc
 * Method:    __setEnv
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_czmq_Zproc__1_1setEnv
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_zeromq_czmq_Zproc
 * Method:    __setStdin
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_czmq_Zproc__1_1setStdin
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_zeromq_czmq_Zproc
 * Method:    __setStdout
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_czmq_Zproc__1_1setStdout
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_zeromq_czmq_Zproc
 * Method:    __setStderr
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_czmq_Zproc__1_1setStderr
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_zeromq_czmq_Zproc
 * Method:    __stdin
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_zeromq_czmq_Zproc__1_1stdin
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zeromq_czmq_Zproc
 * Method:    __stdout
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_zeromq_czmq_Zproc__1_1stdout
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zeromq_czmq_Zproc
 * Method:    __stderr
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_zeromq_czmq_Zproc__1_1stderr
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zeromq_czmq_Zproc
 * Method:    __run
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_zeromq_czmq_Zproc__1_1run
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zeromq_czmq_Zproc
 * Method:    __returncode
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_zeromq_czmq_Zproc__1_1returncode
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zeromq_czmq_Zproc
 * Method:    __pid
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_zeromq_czmq_Zproc__1_1pid
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zeromq_czmq_Zproc
 * Method:    __running
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_zeromq_czmq_Zproc__1_1running
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zeromq_czmq_Zproc
 * Method:    __wait
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_org_zeromq_czmq_Zproc__1_1wait
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_zeromq_czmq_Zproc
 * Method:    __shutdown
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_czmq_Zproc__1_1shutdown
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_zeromq_czmq_Zproc
 * Method:    __actor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_zeromq_czmq_Zproc__1_1actor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zeromq_czmq_Zproc
 * Method:    __kill
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_czmq_Zproc__1_1kill
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_zeromq_czmq_Zproc
 * Method:    __setVerbose
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_czmq_Zproc__1_1setVerbose
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     org_zeromq_czmq_Zproc
 * Method:    __test
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_zeromq_czmq_Zproc__1_1test
  (JNIEnv *, jclass, jboolean);

#ifdef __cplusplus
}
#endif
#endif
