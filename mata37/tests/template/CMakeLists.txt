cmake_minimum_required(VERSION 3.2)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -O3")

set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})

set(CUBIC_INSTALL_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set(CUBIC_INSTALL_BIN_DIR ${PROJECT_SOURCE_DIR}/bin)
set(CUBIC_INSTALL_LIB_DIR ${PROJECT_SOURCE_DIR}/lib)

set(CUBIC_HEADERS_DIR ${PROJECT_SOURCE_DIR}/src/cubic)

include_directories(${CUBIC_INSTALL_INCLUDE_DIR})
include_directories(${CUBIC_HEADERS_DIR})

add_subdirectory(src)
add_subdirectory(test)


