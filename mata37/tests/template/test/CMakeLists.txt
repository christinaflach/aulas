cmake_minimum_required(VERSION 3.2)
project(cubic_tests)

add_subdirectory(lib/googletest)

include_directories(${CUBIC_HEADERS_DIR})
include_directories(lib/googletest/googletest/include)

set(SOURCE_FILES main.cpp src/cubic_tests.cpp)

add_executable(cubic_tests ${SOURCE_FILES})
target_link_libraries(cubic_tests cubic gtest)
install(TARGETS cubic_tests DESTINATION bin)

