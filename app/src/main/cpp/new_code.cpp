
#include <jni.h>
#include <string>
#include <iostream>

std::string get_string()
{
    return "Thrwat";
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_someapp_Server_00024Companion_NewMethod(JNIEnv *env, jobject thiz) {
    std::string hello = get_string();
    return env->NewStringUTF(hello.c_str());
}