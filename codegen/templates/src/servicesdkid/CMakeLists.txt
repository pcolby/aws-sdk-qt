{% with service.traits.awsApi_service.sdkId|cut:" " as ServiceName %}
add_compile_definitions(QTAWS{{ServiceName|upper}}_LIBRARY)

add_library(QtAws{{ServiceName}}
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
  {{name|lower}}response_p.h
{% endfor %}
  {{ServiceName|lower}}client.cpp
  {{ServiceName|lower}}request.cpp
  {{ServiceName|lower}}response.cpp
{% for name,op in service.operations.items %}
  {{name|lower}}request.cpp
  {{name|lower}}response.cpp
{% endfor %})

target_link_libraries(QtAws{{ServiceName}}
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
{% endwith %}
