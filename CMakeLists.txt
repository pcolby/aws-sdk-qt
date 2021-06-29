
cmake_minimum_required(VERSION 3.0)
message("-- CMake version is ${CMAKE_VERSION}")
if (DEFINED CMAKE_BUILD_TYPE)
  message("-- CMake build type is ${CMAKE_BUILD_TYPE}")
endif()

set(CMAKE_CXX_EXTENSIONS OFF)

project(
  QtAwsSdk
  VERSION 0.3
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
message("-- Found Qt ${Qt${QT_VERSION_MAJOR}_VERSION}")

# Include the codegen sub-project if Grantlee is found.
# If BUILD_CODEGEN is "AUTO" we'll only look for Grantlee with Qt5, since Grantlee is
# not usually available for Qt6 yet.
set(BUILD_CODEGEN AUTO CACHE BOOL "Build codegen sub-project")
if (BUILD_CODEGEN AND ((NOT BUILD_CODEGEN STREQUAL AUTO) OR (QT_VERSION_MAJOR EQUAL 5)))
  if (BUILD_CODEGEN)
    find_package(Grantlee5 REQUIRED)
  else()
    find_package(Grantlee5 QUIET)
  endif()
  if (Grantlee5_FOUND)
    message("-- Found Grantlee ${Grantlee5_VERSION}")
    add_subdirectory(codegen)
  else()
    message("Grantlee not found; codegen sub-project skipped")
  endif()
endif()

add_subdirectory(doc)
add_subdirectory(src)
add_subdirectory(test)
