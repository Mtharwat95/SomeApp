package com.example.someapp

class Server {
    companion object{
        init {
            System.loadLibrary("new_code")
        }
        external fun NewMethod(): String
    }
}