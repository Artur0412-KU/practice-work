cmake_minimum_required(VERSION 3.23)
project(6)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)

add_executable(6
        .idea/.gitignore
        .idea/6.iml
        .idea/modules.xml
        .idea/workspace.xml
        main.c)
