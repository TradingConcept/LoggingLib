cmake_minimum_required (VERSION 3.5)
project(Logging)

set(LOGGING_LIB_VERSION_MAJOR 1)
set(LOGGING_LIB_VERSION_MINOR 0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Creamos librerías
set(LOGGING_LIB_SOURCESLIB
  ${PROJECT_SOURCE_DIR}/src/LoggingLib.cpp
  )
include_directories(
  "${PROJECT_SOURCE_DIR}/include"
  )
add_library(LoggingLib SHARED ${LOGGING_LIB_SOURCESLIB})

# Creamos el ejecutable prinipal y le pegamos la librería
set(SOURCES
  ${PROJECT_SOURCE_DIR}/src/main.cpp
  )
include_directories(
  "${PROJECT_SOURCE_DIR}/include"
  )
add_executable(Logging ${SOURCES})

# por el momento parece que sólo requerimos la de system, ya vermos después
find_package(Boost COMPONENTS system REQUIRED) 
target_link_libraries (
    Logging
    LoggingLib
    ${Boost_SYSTEM_LIBRARY}
    )
  

