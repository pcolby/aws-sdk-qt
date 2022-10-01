# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

cmake_minimum_required(VERSION 3.0)

add_library(
  QtAwsKinesisVideoSignaling
  qtawskinesisvideosignalingglobal.h
  kinesisvideosignalingclient.h
  kinesisvideosignalingclient_p.h
  kinesisvideosignalingrequest.h
  kinesisvideosignalingrequest_p.h
  kinesisvideosignalingresponse.h
  kinesisvideosignalingresponse_p.h
  geticeserverconfigrequest.h
  geticeserverconfigrequest_p.h
  geticeserverconfigresponse.h
  geticeserverconfigresponse_p.h
  sendalexaoffertomasterrequest.h
  sendalexaoffertomasterrequest_p.h
  sendalexaoffertomasterresponse.h
  sendalexaoffertomasterresponse_p.h
  kinesisvideosignalingclient.cpp
  kinesisvideosignalingrequest.cpp
  kinesisvideosignalingresponse.cpp
  geticeserverconfigrequest.cpp
  geticeserverconfigresponse.cpp
  sendalexaoffertomasterrequest.cpp
  sendalexaoffertomasterresponse.cpp
)

target_link_libraries(QtAwsKinesisVideoSignaling
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)

target_compile_definitions(QtAwsKinesisVideoSignaling PRIVATE QTAWSKINESISVIDEOSIGNALING_LIBRARY)
