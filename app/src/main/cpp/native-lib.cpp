#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring

JNICALL
Java_sample_ndk_bitrise_io_bitriseiondksample_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
