# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

cmake_minimum_required(VERSION 3.0)

add_library(
  QtAwsRoute53RecoveryCluster
  qtawsroute53recoveryclusterglobal.h
  route53recoveryclusterclient.h
  route53recoveryclusterclient_p.h
  route53recoveryclusterrequest.h
  route53recoveryclusterrequest_p.h
  route53recoveryclusterresponse.h
  route53recoveryclusterresponse_p.h
  getroutingcontrolstaterequest.h
  getroutingcontrolstaterequest_p.h
  getroutingcontrolstateresponse.h
  getroutingcontrolstateresponse_p.h
  listroutingcontrolsrequest.h
  listroutingcontrolsrequest_p.h
  listroutingcontrolsresponse.h
  listroutingcontrolsresponse_p.h
  updateroutingcontrolstaterequest.h
  updateroutingcontrolstaterequest_p.h
  updateroutingcontrolstateresponse.h
  updateroutingcontrolstateresponse_p.h
  updateroutingcontrolstatesrequest.h
  updateroutingcontrolstatesrequest_p.h
  updateroutingcontrolstatesresponse.h
  updateroutingcontrolstatesresponse_p.h
  route53recoveryclusterclient.cpp
  route53recoveryclusterrequest.cpp
  route53recoveryclusterresponse.cpp
  getroutingcontrolstaterequest.cpp
  getroutingcontrolstateresponse.cpp
  listroutingcontrolsrequest.cpp
  listroutingcontrolsresponse.cpp
  updateroutingcontrolstaterequest.cpp
  updateroutingcontrolstateresponse.cpp
  updateroutingcontrolstatesrequest.cpp
  updateroutingcontrolstatesresponse.cpp
)

target_link_libraries(QtAwsRoute53RecoveryCluster
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)

target_compile_definitions(QtAwsRoute53RecoveryCluster PRIVATE QTAWSROUTE53RECOVERYCLUSTER_LIBRARY)
