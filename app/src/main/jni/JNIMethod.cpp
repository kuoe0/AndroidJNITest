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
	jfieldID fid = env->GetStaticFieldID(cls, "sMsg", "Ljava/lang/String;");
	jstring str = (jstring) env->GetStaticObjectField(cls, fid);
	return str;
}

 // getStringFromNativeForMemberFunction
JNIEXPORT jstring JNICALL
Java_tw_kuoe0_androidjnitest_JNIMethod_getStringFromNativeForMemberFunction(JNIEnv *env, jobject obj)
{
	jclass cls = env->FindClass("tw/kuoe0/androidjnitest/JNIMethod");
	jfieldID fid = env->GetFieldID(cls, "mMsg", "Ljava/lang/String;");
	jstring str = (jstring) env->GetObjectField(obj, fid);
	return str;
}
