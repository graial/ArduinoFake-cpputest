cmake_minimum_required(VERSION 3.2.2)
project(cpputest VERSION 4.0 LANGUAGES CXX)

include(git-download)

set(REPO_DIR ${PROJECT_SOURCE_DIR}/${PROJECT_NAME}-repo)

download_repo(
    URL "https://github.com/cpputest/cpputest.git"
    TAG v${PROJECT_VERSION}
    CLONE_DIR ${REPO_DIR}
)

add_library(CppUTest
    ${REPO_DIR}/src/CppUTest/CommandLineArguments.cpp
    ${REPO_DIR}/src/CppUTest/MemoryLeakWarningPlugin.cpp
    ${REPO_DIR}/src/CppUTest/TestHarness_c.cpp
    ${REPO_DIR}/src/CppUTest/TestRegistry.cpp
    ${REPO_DIR}/src/CppUTest/CommandLineTestRunner.cpp
    ${REPO_DIR}/src/CppUTest/SimpleString.cpp
    ${REPO_DIR}/src/CppUTest/SimpleStringInternalCache.cpp
    ${REPO_DIR}/src/CppUTest/TestMemoryAllocator.cpp
    ${REPO_DIR}/src/CppUTest/TestResult.cpp
    ${REPO_DIR}/src/CppUTest/JUnitTestOutput.cpp
    ${REPO_DIR}/src/CppUTest/TeamCityTestOutput.cpp
    ${REPO_DIR}/src/CppUTest/TestFailure.cpp
    ${REPO_DIR}/src/CppUTest/TestOutput.cpp
    ${REPO_DIR}/src/CppUTest/MemoryLeakDetector.cpp
    ${REPO_DIR}/src/CppUTest/TestFilter.cpp
    ${REPO_DIR}/src/CppUTest/TestPlugin.cpp
    ${REPO_DIR}/src/CppUTest/TestTestingFixture.cpp
    ${REPO_DIR}/src/CppUTest/TestTestingFixture.cpp
    ${REPO_DIR}/src/CppUTest/SimpleMutex.cpp
    ${REPO_DIR}/src/CppUTest/Utest.cpp
    ${REPO_DIR}/src/Platforms/Gcc/UtestPlatform.cpp
)

target_include_directories(CppUTest PUBLIC
    ${REPO_DIR}/include
)
