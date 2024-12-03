cmake_minimum_required(VERSION 3.10)

set(TITLE DayXX)

project(${TITLE} VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCE_DIR ${PROJECT_SOURCE_DIR}/src)
set(INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)

file(GLOB_RECURSE SOURCES "${SOURCE_DIR}/*.cc")

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(${TITLE} ${SOURCES})

target_include_directories(${TITLE} PRIVATE ${INCLUDE_DIR})

target_link_libraries(${TITLE})

