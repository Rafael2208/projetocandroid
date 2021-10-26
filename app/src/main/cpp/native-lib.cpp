#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_br_com_estudoc_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++ o inicio";
    return env->NewStringUTF(hello.c_str());
}