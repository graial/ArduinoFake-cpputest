cmake_minimum_required(VERSION 3.2.2)
project(cpputest VERSION 4.0 LANGUAGES CXX)

include(git-download)

set(REPO_DIR ${PROJECT_SOURCE_DIR}/${PROJECT_NAME}-repo)

download_repo(
    URL "https://github.com/cpputest/cpputest.git"
    TAG v${PROJECT_VERSION}
    CLONE_DIR ${REPO_DIR}
)

add_library(${PROJECT_NAME} STATIC
    ${REPO_DIR}/src/CppUTest/Utest.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC
    ${REPO_DIR}/include
)
