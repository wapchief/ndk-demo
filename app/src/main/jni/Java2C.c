#include "com_wapchief_ndk_demo_Java2CJNI.h"
JINEXPORT jstring JNICALL
Java_com_wapchief_ndk_demo_Java2CJNI_java2C(JNIEnv *env, jobject){

    return (*env)->NewStringUTF(env,"I am From Native C .");
}