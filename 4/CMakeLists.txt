cmake_minimum_required(VERSION 3.23)
project(4)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)

add_executable(4
        .idea/.gitignore
        .idea/4.iml
        .idea/modules.xml
        .idea/workspace.xml
        main.c)
