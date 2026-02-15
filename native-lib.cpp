#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_sepaxyt_loader_MainActivity_StartMenu(JNIEnv* env, jobject /* this */) {
    // Aap GitHub se is message ko jab chahein change kar sakte hain
    std::string message = "Hello from GitHub Cloud! Version 1.0";
    return env->NewStringUTF(message.c_str());
}
