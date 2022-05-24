cmake_minimum_required(VERSION 2.4)

project(BRL-test)

set(TARGET_NAME rocket)

file(GLOB SOURCES "src/*.cpp")

add_executable (rocket ${SOURCES})

target_include_directories(${TARGET_NAME} PRIVATE include)

set_property(TARGET rocket PROPERTY CXX_STANDARD 17)


