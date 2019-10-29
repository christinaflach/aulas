cmake_minimum_required(VERSION 3.2)
project(cubics)

add_subdirectory(cubic)
set(SOURCE_FILES main.cpp)

add_executable(cubics ${SOURCE_FILES})
target_link_libraries(cubics cubic)
install(TARGETS cubics DESTINATION ${CUBIC_INSTALL_BIN_DIR})
