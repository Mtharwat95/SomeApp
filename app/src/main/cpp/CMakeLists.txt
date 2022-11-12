cmake_minimum_required(VERSION 3.4.1)

add_library(
        cpp_code
        SHARED
        /Volumes/FlutterWork/SomeApp/app/src/main/cpp/cpp_code.cpp
            )

find_library(
        cpp_code
        log
            )

target_link_libraries(
        cpp_code
        ${log-lib}
                )


add_library(
        new_code
        SHARED
        /Volumes/FlutterWork/SomeApp/app/src/main/cpp/new_code.cpp
)

find_library(
        new_code
        log
)

target_link_libraries(
        new_code
        ${log-lib}
)