cmake_minimum_required(VERSION 3.10)

project(Day1 VERSION 1.0)

set(CMAKE_BUILD_RPATH /Library/Frameworks)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCE_DIR ${PROJECT_SOURCE_DIR}/src)
set(INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)

set(SOURCES
    ${SOURCE_DIR}/main.cc
    ${SOURCE_DIR}/string_extensions.cc
)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(Day1 ${SOURCES})

target_include_directories(Day1 PRIVATE ${INCLUDE_DIR})

target_link_libraries(Day1)

