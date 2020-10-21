cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_EXTENSIONS OFF)

project(
  QtAwsSdk
  VERSION 0.3
  DESCRIPTION "Unnoficial AWS SDK for Qt"
 #HOMEPAGE_URL "https://github.com/pcolby/aws-sdk-qt"
  LANGUAGES CXX)

find_package(Grantlee5)
if (Grantlee5_FOUND)
  add_subdirectory(codegen)
endif()

add_subdirectory(doc)
add_subdirectory(src)
add_subdirectory(test)
