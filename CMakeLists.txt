cmake_minimum_required(VERSION 3.5)

set(QUICK_START_VERSION_MAJOR 1)
set(QUICK_START_VERSION_MINOR 0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

#################################################################
set(LOGGING_LIB_SOURCES ${PROJECT_SOURCE_DIR}/LoggingLib/LoggingLib.cpp)
include_directories("${PROJECT_SOURCE_DIR}/LoggingLib/include")
add_library(LoggingLib SHARED ${LOGGING_LIB_SOURCES})
