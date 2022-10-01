cmake_minimum_required(VERSION 3.0)
message(STATUS "CMake version is ${CMAKE_VERSION}")
if (DEFINED CMAKE_BUILD_TYPE)
  message(STATUS "CMake build type is ${CMAKE_BUILD_TYPE}")
endif()

set(CMAKE_CXX_EXTENSIONS OFF)

project(
  QtAwsSdk
  VERSION 0.4
  DESCRIPTION "Unnoficial AWS SDK for Qt"
 #HOMEPAGE_URL "https://github.com/pcolby/aws-sdk-qt"
  LANGUAGES CXX)

# Disable automatic ASCII conversions.
add_definitions(-DQT_NO_CAST_FROM_ASCII -DQT_NO_CAST_TO_ASCII)

# Enable most compiler warnings, and treat as errors.
if (MSVC)
  add_compile_options(/W4 /WX)
else()
  add_compile_options(-Wall -Wextra -Werror)
endif()

# Default to Qt6 where available, otherwise Qt5.
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
find_package(QT REQUIRED COMPONENTS Core Network NAMES Qt6 Qt5)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Network)
message(STATUS "Found Qt ${Qt${QT_VERSION_MAJOR}_VERSION}")

add_subdirectory(doc)
add_subdirectory(src)
add_subdirectory(test)
