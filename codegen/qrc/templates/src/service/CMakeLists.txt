find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(
  {{ModuleName}}
{% for header in HeaderFiles %}
  {{header}}{% endfor %}
{% for source in SourceFiles %}
  {{source}}{% endfor %})

add_dependencies({{ModuleName}} QtAwsCore)

target_link_libraries({{ModuleName}} Qt5::Core Qt5::Network)
