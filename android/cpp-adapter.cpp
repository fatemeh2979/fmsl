#include <jni.h>
#include "fmsl.h"

extern "C"
JNIEXPORT jint JNICALL
Java_com_fmsl_FmslModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return fmsl::multiply(a, b);
}
