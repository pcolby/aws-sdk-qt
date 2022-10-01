# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

add_compile_definitions(QTAWSIOTJOBSDATAPLANE_LIBRARY)

add_library(QtAwsIoTJobsDataPlane
  qtawsiotjobsdataplaneglobal.h
  iotjobsdataplaneclient.h
  iotjobsdataplaneclient_p.h
  iotjobsdataplanerequest.h
  iotjobsdataplanerequest_p.h
  iotjobsdataplaneresponse.h
  iotjobsdataplaneresponse_p.h
  describejobexecutionrequest.h
  describejobexecutionrequest_p.h
  describejobexecutionresponse.h
  describejobexecutionresponse_p.h
  getpendingjobexecutionsrequest.h
  getpendingjobexecutionsrequest_p.h
  getpendingjobexecutionsresponse.h
  getpendingjobexecutionsresponse_p.h
  startnextpendingjobexecutionrequest.h
  startnextpendingjobexecutionrequest_p.h
  startnextpendingjobexecutionresponse.h
  startnextpendingjobexecutionresponse_p.h
  updatejobexecutionrequest.h
  updatejobexecutionrequest_p.h
  updatejobexecutionresponse.h
  updatejobexecutionresponse_p.h
  iotjobsdataplaneclient.cpp
  iotjobsdataplanerequest.cpp
  iotjobsdataplaneresponse.cpp
  describejobexecutionrequest.cpp
  describejobexecutionresponse.cpp
  getpendingjobexecutionsrequest.cpp
  getpendingjobexecutionsresponse.cpp
  startnextpendingjobexecutionrequest.cpp
  startnextpendingjobexecutionresponse.cpp
  updatejobexecutionrequest.cpp
  updatejobexecutionresponse.cpp)

target_link_libraries(QtAwsIoTJobsDataPlane
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
