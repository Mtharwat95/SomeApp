package com.example.someapp

class Server {
    companion object{
        init {
            System.loadLibrary("new_code")
            System.loadLibrary("cpp_code")
        }
        external fun NewMethod(): String
        external fun Method(): String
    }
}