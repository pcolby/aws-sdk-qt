include_directories("${CMAKE_CURRENT_LIST_DIR}")
add_subdirectory(core)
{% for name in ModuleNames %}
add_subdirectory({{name|lower}})
{% endfor %}
