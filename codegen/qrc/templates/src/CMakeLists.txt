add_compile_definitions(QTAWS_LIBRARY)
option(BUILD_SHARED_LIBS "Build shared libraries" ON)
if (BUILD_SHARED_LIBS)
  add_compile_definitions(QTAWS_SHARED)
endif()

include_directories("${CMAKE_CURRENT_LIST_DIR}")
add_subdirectory(core)
{% for name in ModuleNames %}
add_subdirectory({{name|lower}})
{% endfor %}
