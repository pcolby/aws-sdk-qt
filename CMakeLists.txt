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
  add_compile_options(/Wall /WX)
else()
  add_compile_options(-Wall -Wextra -Werror)
endif()

# See if we have Grantlee available.
find_package(Grantlee5 QUIET)
if (Grantlee5_FOUND)
  message("-- Found Grantlee ${Grantlee5_VERSION}")
  add_subdirectory(codegen)
else()
  message("Grantlee not found; codegen sub-project skipped")
endif()

add_subdirectory(doc)
add_subdirectory(src)
add_subdirectory(test)
