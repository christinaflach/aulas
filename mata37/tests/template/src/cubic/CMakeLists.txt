cmake_minimum_required(VERSION 3.2)
project(cubic C CXX)

set(SOURCE_FILES
    cubic.h
    cubic.cpp
)

add_library(cubic SHARED STATIC ${SOURCE_FILES})

install(TARGETS cubic DESTINATION ${CUBIC_INSTALL_LIB_DIR})
install(FILES cubic.h DESTINATION ${CUBIC_INSTALL_INCLUDE_DIR})
