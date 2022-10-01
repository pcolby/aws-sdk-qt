# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

cmake_minimum_required(VERSION 3.0)

add_library(
  QtAwsIvsChat
  qtawsivschatglobal.h
  ivschatclient.h
  ivschatclient_p.h
  ivschatrequest.h
  ivschatrequest_p.h
  ivschatresponse.h
  ivschatresponse_p.h
  createchattokenrequest.h
  createchattokenrequest_p.h
  createchattokenresponse.h
  createchattokenresponse_p.h
  createroomrequest.h
  createroomrequest_p.h
  createroomresponse.h
  createroomresponse_p.h
  deletemessagerequest.h
  deletemessagerequest_p.h
  deletemessageresponse.h
  deletemessageresponse_p.h
  deleteroomrequest.h
  deleteroomrequest_p.h
  deleteroomresponse.h
  deleteroomresponse_p.h
  disconnectuserrequest.h
  disconnectuserrequest_p.h
  disconnectuserresponse.h
  disconnectuserresponse_p.h
  getroomrequest.h
  getroomrequest_p.h
  getroomresponse.h
  getroomresponse_p.h
  listroomsrequest.h
  listroomsrequest_p.h
  listroomsresponse.h
  listroomsresponse_p.h
  listtagsforresourcerequest.h
  listtagsforresourcerequest_p.h
  listtagsforresourceresponse.h
  listtagsforresourceresponse_p.h
  sendeventrequest.h
  sendeventrequest_p.h
  sendeventresponse.h
  sendeventresponse_p.h
  tagresourcerequest.h
  tagresourcerequest_p.h
  tagresourceresponse.h
  tagresourceresponse_p.h
  untagresourcerequest.h
  untagresourcerequest_p.h
  untagresourceresponse.h
  untagresourceresponse_p.h
  updateroomrequest.h
  updateroomrequest_p.h
  updateroomresponse.h
  updateroomresponse_p.h
  ivschatclient.cpp
  ivschatrequest.cpp
  ivschatresponse.cpp
  createchattokenrequest.cpp
  createchattokenresponse.cpp
  createroomrequest.cpp
  createroomresponse.cpp
  deletemessagerequest.cpp
  deletemessageresponse.cpp
  deleteroomrequest.cpp
  deleteroomresponse.cpp
  disconnectuserrequest.cpp
  disconnectuserresponse.cpp
  getroomrequest.cpp
  getroomresponse.cpp
  listroomsrequest.cpp
  listroomsresponse.cpp
  listtagsforresourcerequest.cpp
  listtagsforresourceresponse.cpp
  sendeventrequest.cpp
  sendeventresponse.cpp
  tagresourcerequest.cpp
  tagresourceresponse.cpp
  untagresourcerequest.cpp
  untagresourceresponse.cpp
  updateroomrequest.cpp
  updateroomresponse.cpp
)

target_link_libraries(QtAwsIvsChat
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)

target_compile_definitions(QtAwsIvsChat PRIVATE QTAWSIVSCHAT_LIBRARY)
