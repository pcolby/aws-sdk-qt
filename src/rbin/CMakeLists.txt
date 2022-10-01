# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

cmake_minimum_required(VERSION 3.0)

add_library(
  QtAwsRbin
  qtawsrbinglobal.h
  rbinclient.h
  rbinclient_p.h
  rbinrequest.h
  rbinrequest_p.h
  rbinresponse.h
  rbinresponse_p.h
  createrulerequest.h
  createrulerequest_p.h
  createruleresponse.h
  createruleresponse_p.h
  deleterulerequest.h
  deleterulerequest_p.h
  deleteruleresponse.h
  deleteruleresponse_p.h
  getrulerequest.h
  getrulerequest_p.h
  getruleresponse.h
  getruleresponse_p.h
  listrulesrequest.h
  listrulesrequest_p.h
  listrulesresponse.h
  listrulesresponse_p.h
  listtagsforresourcerequest.h
  listtagsforresourcerequest_p.h
  listtagsforresourceresponse.h
  listtagsforresourceresponse_p.h
  tagresourcerequest.h
  tagresourcerequest_p.h
  tagresourceresponse.h
  tagresourceresponse_p.h
  untagresourcerequest.h
  untagresourcerequest_p.h
  untagresourceresponse.h
  untagresourceresponse_p.h
  updaterulerequest.h
  updaterulerequest_p.h
  updateruleresponse.h
  updateruleresponse_p.h
  rbinclient.cpp
  rbinrequest.cpp
  rbinresponse.cpp
  createrulerequest.cpp
  createruleresponse.cpp
  deleterulerequest.cpp
  deleteruleresponse.cpp
  getrulerequest.cpp
  getruleresponse.cpp
  listrulesrequest.cpp
  listrulesresponse.cpp
  listtagsforresourcerequest.cpp
  listtagsforresourceresponse.cpp
  tagresourcerequest.cpp
  tagresourceresponse.cpp
  untagresourcerequest.cpp
  untagresourceresponse.cpp
  updaterulerequest.cpp
  updateruleresponse.cpp
)

target_link_libraries(QtAwsRbin
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)

target_compile_definitions(QtAwsRbin PRIVATE QTAWSRBIN_LIBRARY)
