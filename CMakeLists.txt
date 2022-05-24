cmake_minimum_required(VERSION 2.4)

project(BRL-test)

set(TARGET_NAME rocket)

file(GLOB SOURCES "src/*.cpp")

add_executable (rocket ${SOURCES})

target_include_directories(${TARGET_NAME} PRIVATE include)

set_property(TARGET rocket PROPERTY CXX_STANDARD 17)

enable_testing()

INCLUDE(Dart)


add_test(NAME Normal_1 COMMAND rocket -l 1)
set_tests_properties(Normal_1 PROPERTIES PASS_REGULAR_EXPRESSION
" [|][\t\r\n] X[\t\r\n]XXX")

add_test(NAME Normal_5 COMMAND rocket -l 5)
set_tests_properties(Normal_5 PROPERTIES PASS_REGULAR_EXPRESSION
"    [|][\t\r\n]    X[\t\r\n]   XXX[\t\r\n]  XXXXX[\t\r\n] XXXXXXX[\t\r\n]XXXXXXXXX[\t\r\n]X   X   X")

add_test(NAME UpsideDown_1 COMMAND rocket -l 1 -i)
set_tests_properties(UpsideDown_1 PROPERTIES PASS_REGULAR_EXPRESSION
"XXX[\t\r\n] X[\t\r\n] [|]")

add_test(NAME UpsideDown_5 COMMAND rocket -l 5 -i)
set_tests_properties(UpsideDown_5 PROPERTIES PASS_REGULAR_EXPRESSION
"X   X   X[\t\r\n]XXXXXXXXX[\t\r\n] XXXXXXX[\t\r\n]  XXXXX[\t\r\n]   XXX[\t\r\n]    X[\t\r\n]    [|]")


