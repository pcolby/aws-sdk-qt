add_library(
  {{ModuleName}}
{% for header in HeaderFiles %}
  {{header}}{% endfor %}
{% for source in SourceFiles %}
  {{source}}{% endfor %})

target_link_libraries(
  {{ModuleName}}
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
