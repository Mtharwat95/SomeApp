//
// Created by Tharwat on 11/11/2022.
//

#include <jni.h>
#include <string>
#include <iostream>


extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_someapp_Server_00024Companion_Method(JNIEnv *env, jobject thiz) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}