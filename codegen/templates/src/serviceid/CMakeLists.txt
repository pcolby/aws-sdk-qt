# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

{% with service.canonicalId as ServiceName %}
cmake_minimum_required(VERSION 3.0)

add_library(
  QtAws{{ServiceName}}
  qtaws{{ServiceName|lower}}global.h
  {{ServiceName|lower}}client.h
  {{ServiceName|lower}}client_p.h
  {{ServiceName|lower}}request.h
  {{ServiceName|lower}}request_p.h
  {{ServiceName|lower}}response.h
  {{ServiceName|lower}}response_p.h
{% for name,op in service.operations.items %}
  {{name|lower}}request.h
  {{name|lower}}request_p.h
  {{name|lower}}response.h
  {{name|lower}}response_p.h{% endfor %}
  {{ServiceName|lower}}client.cpp
  {{ServiceName|lower}}request.cpp
  {{ServiceName|lower}}response.cpp
{% for name,op in service.operations.items %}
  {{name|lower}}request.cpp
  {{name|lower}}response.cpp{% endfor %}
)

target_link_libraries(QtAws{{ServiceName}}
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)

target_compile_definitions(QtAws{{ServiceName}} PRIVATE QTAWS{{ServiceName|upper}}_LIBRARY)
{% endwith %}
