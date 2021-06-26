set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

# Used by codegen to default paths relative to the codegen project's directory.
add_definitions(-DCODEGEN_PROJECT_DIR="${CMAKE_CURRENT_SOURCE_DIR}")

add_executable(
  codegen
  src/generator.cpp
  src/generator.h
  src/main.cpp
  qrc/templates.qrc
)

# Don't build the codegen executable by default.
set_target_properties(codegen PROPERTIES EXCLUDE_FROM_ALL TRUE)

target_link_libraries(
  codegen
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Grantlee5::Templates)
