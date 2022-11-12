package com.example.someapp

import android.annotation.SuppressLint
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.TextView

class MainActivity : AppCompatActivity() {

    @SuppressLint("MissingInflatedId")
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val textView: TextView = findViewById(R.id.tv)

        textView.setOnClickListener {

            textView.text = Server.NewMethod()

        }

        val textView2: TextView = findViewById(R.id.tv2)

        textView2.setOnClickListener {

            textView2.text = Server.Method()

        }

    }

}