/*
 * Filename: JNIMethod.cpp
 * Author:   KuoE0 <kuoe0.tw@gmail.com>
 *
 * Copyright (C) 2016
 *
 * Distributed under terms of the MIT license.
 */

#include "tw_kuoe0_androidjnitest_JNIMethod.h"

 // getStringFromNativeForStaticFunction
JNIEXPORT jstring JNICALL
Java_tw_kuoe0_androidjnitest_JNIMethod_getStringFromNativeForStaticFunction(JNIEnv *env, jclass cls)
{
	return env->NewStringUTF("Hello world from static!");
}

 // getStringFromNativeForMemberFunction
JNIEXPORT jstring JNICALL
Java_tw_kuoe0_androidjnitest_JNIMethod_getStringFromNativeForMemberFunction(JNIEnv *env, jobject obj)
{
	return env->NewStringUTF("Hello world from member!");
}
