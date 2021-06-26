set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

add_library(
  {{ModuleName}}
{% for header in HeaderFiles %}
  {{header}}{% endfor %}
{% for source in SourceFiles %}
  {{source}}{% endfor %})

add_dependencies({{ModuleName}} QtAwsCore)

target_link_libraries(
  {{ModuleName}}
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
