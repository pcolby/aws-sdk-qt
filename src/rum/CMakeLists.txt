# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

add_compile_definitions(QTAWSRUM_LIBRARY)

add_library(QtAwsRum
  qtawsrumglobal.h
  rumclient.h
  rumclient_p.h
  rumrequest.h
  rumrequest_p.h
  rumresponse.h
  rumresponse_p.h
  createappmonitorrequest.h
  createappmonitorrequest_p.h
  createappmonitorresponse.h
  createappmonitorresponse_p.h
  deleteappmonitorrequest.h
  deleteappmonitorrequest_p.h
  deleteappmonitorresponse.h
  deleteappmonitorresponse_p.h
  getappmonitorrequest.h
  getappmonitorrequest_p.h
  getappmonitorresponse.h
  getappmonitorresponse_p.h
  getappmonitordatarequest.h
  getappmonitordatarequest_p.h
  getappmonitordataresponse.h
  getappmonitordataresponse_p.h
  listappmonitorsrequest.h
  listappmonitorsrequest_p.h
  listappmonitorsresponse.h
  listappmonitorsresponse_p.h
  listtagsforresourcerequest.h
  listtagsforresourcerequest_p.h
  listtagsforresourceresponse.h
  listtagsforresourceresponse_p.h
  putrumeventsrequest.h
  putrumeventsrequest_p.h
  putrumeventsresponse.h
  putrumeventsresponse_p.h
  tagresourcerequest.h
  tagresourcerequest_p.h
  tagresourceresponse.h
  tagresourceresponse_p.h
  untagresourcerequest.h
  untagresourcerequest_p.h
  untagresourceresponse.h
  untagresourceresponse_p.h
  updateappmonitorrequest.h
  updateappmonitorrequest_p.h
  updateappmonitorresponse.h
  updateappmonitorresponse_p.h
  rumclient.cpp
  rumrequest.cpp
  rumresponse.cpp
  createappmonitorrequest.cpp
  createappmonitorresponse.cpp
  deleteappmonitorrequest.cpp
  deleteappmonitorresponse.cpp
  getappmonitorrequest.cpp
  getappmonitorresponse.cpp
  getappmonitordatarequest.cpp
  getappmonitordataresponse.cpp
  listappmonitorsrequest.cpp
  listappmonitorsresponse.cpp
  listtagsforresourcerequest.cpp
  listtagsforresourceresponse.cpp
  putrumeventsrequest.cpp
  putrumeventsresponse.cpp
  tagresourcerequest.cpp
  tagresourceresponse.cpp
  untagresourcerequest.cpp
  untagresourceresponse.cpp
  updateappmonitorrequest.cpp
  updateappmonitorresponse.cpp)

target_link_libraries(QtAwsRum
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
