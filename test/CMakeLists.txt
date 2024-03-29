cmake_minimum_required(VERSION 3.5)
project(all_tests VERSION 0.1)

file(GLOB cpp_test_files *.cpp)
add_definitions(-DUNIT_TEST)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# CppUTest
include(FetchContent)
FetchContent_Declare(
    CppUTest
    GIT_REPOSITORY https://github.com/cpputest/cpputest.git
    GIT_TAG        master # or use release tag, eg. v4.0
)
# Set this to ON if you want to have the CppUTests in your project as well.
set(TESTS OFF CACHE BOOL "Switch off CppUTest Test build")
FetchContent_MakeAvailable(CppUTest)

# FakeIt
FetchContent_Declare(
    FakeIt
    GIT_REPOSITORY https://github.com/eranpeer/FakeIt.git
    GIT_TAG    master
)
FetchContent_MakeAvailable(FakeIt)

# ArduinoFake
FetchContent_Declare(
    ArduinoFake
    GIT_REPOSITORY https://github.com/FabioBatSilva/ArduinoFake.git
    GIT_TAG    master
)
FetchContent_MakeAvailable(ArduinoFake)

SET(OBJS
  ${CMAKE_CURRENT_SOURCE_DIR}/objs/blink.o
)

add_executable(first_test ${OBJS} AllTests.cpp MyFirstTest.cpp)

target_include_directories(first_test PUBLIC
    "build/_deps/arduinofake-src/src"
    "build/_deps/fakeit-src/include/fakeit"
    "includes"
)

target_compile_options(first_test PUBLIC
    "$<$<COMPILE_LANGUAGE:C,CXX>:-includeMyMemoryLeakDetectorNewMacrosFile.h>"
    "$<$<COMPILE_LANGUAGE:CXX>:-includeMyMemoryLeakDetectorNewMacrosFile.h>"
)

target_link_libraries(first_test PRIVATE
   ${CMAKE_CURRENT_SOURCE_DIR}/objs/blink.o  # if I uncomment this, I get a multiple redefinition error
    ArduinoFake
    FakeIt-standalone
    CppUTest::CppUTest
    CppUTest::CppUTestExt
)
