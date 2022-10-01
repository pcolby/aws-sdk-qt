# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

add_compile_definitions(QTAWSQLDBSESSION_LIBRARY)

add_library(QtAwsQldbSession
  qtawsqldbsessionglobal.h
  qldbsessionclient.h
  qldbsessionclient_p.h
  qldbsessionrequest.h
  qldbsessionrequest_p.h
  qldbsessionresponse.h
  qldbsessionresponse_p.h
  sendcommandrequest.h
  sendcommandrequest_p.h
  sendcommandresponse.h
  sendcommandresponse_p.h
  qldbsessionclient.cpp
  qldbsessionrequest.cpp
  qldbsessionresponse.cpp
  sendcommandrequest.cpp
  sendcommandresponse.cpp)

target_link_libraries(QtAwsQldbSession
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
