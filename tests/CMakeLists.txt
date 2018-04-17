cmake_minimum_required(VERSION 3.10.1)

project(DCNNF_TESTS)

SET(CMAKE_CXX_STANDARD 14)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_INCLUDE_CURRENT_DIR_IN_INTERFACE ON)

set(SOURCES
  tests.cpp
  )

set(INCLUDES
  catch.hpp
  )

add_executable(tests ${SOURCES} ${INCLUDES})
target_link_libraries(tests DCNNF::DCNNF)

target_include_directories(${LIB_NAME} PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>)

