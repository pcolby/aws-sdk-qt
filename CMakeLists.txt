cmake_minimum_required(VERSION 3.0)

project(
  QtAwsSdk
  VERSION 0.3
  DESCRIPTION "Unnoficial AWS SDK for Qt"
  HOMEPAGE_URL "https://github.com/pcolby/aws-sdk-qt"
  LANGUAGES CXX)

add_subdirectory(doc)
add_subdirectory(src)
add_subdirectory(test)
