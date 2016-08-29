package com.example.hellojni.Utils;

/**
 * Created by taipp on 8/29/2016.
 */
public class JniString {
    static {
        System.loadLibrary("hello-jni");
    }
    public static native String helloJNI();
}
