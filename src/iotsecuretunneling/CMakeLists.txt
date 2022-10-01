# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

cmake_minimum_required(VERSION 3.0)

add_library(
  QtAwsIoTSecureTunneling
  qtawsiotsecuretunnelingglobal.h
  iotsecuretunnelingclient.h
  iotsecuretunnelingclient_p.h
  iotsecuretunnelingrequest.h
  iotsecuretunnelingrequest_p.h
  iotsecuretunnelingresponse.h
  iotsecuretunnelingresponse_p.h
  closetunnelrequest.h
  closetunnelrequest_p.h
  closetunnelresponse.h
  closetunnelresponse_p.h
  describetunnelrequest.h
  describetunnelrequest_p.h
  describetunnelresponse.h
  describetunnelresponse_p.h
  listtagsforresourcerequest.h
  listtagsforresourcerequest_p.h
  listtagsforresourceresponse.h
  listtagsforresourceresponse_p.h
  listtunnelsrequest.h
  listtunnelsrequest_p.h
  listtunnelsresponse.h
  listtunnelsresponse_p.h
  opentunnelrequest.h
  opentunnelrequest_p.h
  opentunnelresponse.h
  opentunnelresponse_p.h
  rotatetunnelaccesstokenrequest.h
  rotatetunnelaccesstokenrequest_p.h
  rotatetunnelaccesstokenresponse.h
  rotatetunnelaccesstokenresponse_p.h
  tagresourcerequest.h
  tagresourcerequest_p.h
  tagresourceresponse.h
  tagresourceresponse_p.h
  untagresourcerequest.h
  untagresourcerequest_p.h
  untagresourceresponse.h
  untagresourceresponse_p.h
  iotsecuretunnelingclient.cpp
  iotsecuretunnelingrequest.cpp
  iotsecuretunnelingresponse.cpp
  closetunnelrequest.cpp
  closetunnelresponse.cpp
  describetunnelrequest.cpp
  describetunnelresponse.cpp
  listtagsforresourcerequest.cpp
  listtagsforresourceresponse.cpp
  listtunnelsrequest.cpp
  listtunnelsresponse.cpp
  opentunnelrequest.cpp
  opentunnelresponse.cpp
  rotatetunnelaccesstokenrequest.cpp
  rotatetunnelaccesstokenresponse.cpp
  tagresourcerequest.cpp
  tagresourceresponse.cpp
  untagresourcerequest.cpp
  untagresourceresponse.cpp
)

target_link_libraries(QtAwsIoTSecureTunneling
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)

target_compile_definitions(QtAwsIoTSecureTunneling PRIVATE QTAWSIOTSECURETUNNELING_LIBRARY)
