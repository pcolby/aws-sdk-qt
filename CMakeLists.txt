cmake_minimum_required(VERSION 3.0)
message("cmake version ${CMAKE_VERSION}")

set(CMAKE_CXX_EXTENSIONS OFF)

project(
  QtAwsSdk
  VERSION 0.3
  DESCRIPTION "Unnoficial AWS SDK for Qt"
 #HOMEPAGE_URL "https://github.com/pcolby/aws-sdk-qt"
  LANGUAGES CXX)

# Disable automatic ASCII conversions.
add_definitions(-DQT_NO_CAST_FROM_ASCII -DQT_NO_CAST_TO_ASCII)

# Enable (and stop on) compiler warnings.
include(CheckCXXCompilerFlag)
check_cxx_compiler_flag(-Wall   HAVE_WALL)
check_cxx_compiler_flag(-Werror HAVE_WERROR)
check_cxx_compiler_flag(-Wextra HAVE_WEXTRA)
if (HAVE_WALL)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
endif()
if (HAVE_WERROR)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror")
endif()
if (HAVE_WEXTRA)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wextra")
endif()

# See if we have Grantlee available.
find_package(Grantlee5)
if (Grantlee5_FOUND)
  add_subdirectory(codegen)
endif()

add_subdirectory(doc)
add_subdirectory(src)
add_subdirectory(test)
