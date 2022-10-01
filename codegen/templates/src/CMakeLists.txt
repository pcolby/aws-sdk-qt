# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

option(BUILD_SHARED_LIBS "Build shared libraries" ON)
if (BUILD_SHARED_LIBS)
  add_compile_definitions(QTAWS_SHARED)
endif()

include_directories("${CMAKE_CURRENT_LIST_DIR}")
add_subdirectory(core)
{% for id,service in services.items %}
add_subdirectory({{service.canonicalId|lower}})
{% endfor %}
