//
// Created by taipp on 8/29/2016.
//
#include "com_example_hellojni_Utils_JniString.h"

JNIEXPORT jstring JNICALL Java_com_example_hellojni_Utils_JniString_helloJNI(JNIEnv *env, jclass cls) {
    return (*env)->NewStringUTF(env, "this is a JNI test from C!");
}