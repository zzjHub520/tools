cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 14)

include_directories(${PROJECT_SOURCE_DIR}/src)

# 开启测试
enable_testing()

set(MY_PROJECT_SRC
        src/myproject/myclass.hpp)

add_executable(MyProject
        ${MY_PROJECT_SRC}
        main.cpp )

# 添加测试目录
add_subdirectory(test)
