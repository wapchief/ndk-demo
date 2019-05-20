package com.wapchief.ndk_demo;

/**
 * @author wapchief
 * @date 2019/5/17
 */

public class Java2CJNI {

    static {
        System.loadLibrary("Java2C");
    }

    public native  String java2C();
}
