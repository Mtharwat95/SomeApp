//
// Created by Tharwat on 11/11/2022.
//

#include <jni.h>
#include <string>
#include <iostream>

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_someapp_MainActivity_Method( JNIEnv *env,
                    jobject /* this */){
                    std::string hello = "Hello from C++";
                    return env->NewStringUTF(hello.c_str());
                    }
