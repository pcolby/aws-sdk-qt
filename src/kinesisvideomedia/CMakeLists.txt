# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

cmake_minimum_required(VERSION 3.0)

add_library(
  QtAwsKinesisVideoMedia
  qtawskinesisvideomediaglobal.h
  kinesisvideomediaclient.h
  kinesisvideomediaclient_p.h
  kinesisvideomediarequest.h
  kinesisvideomediarequest_p.h
  kinesisvideomediaresponse.h
  kinesisvideomediaresponse_p.h
  getmediarequest.h
  getmediarequest_p.h
  getmediaresponse.h
  getmediaresponse_p.h
  kinesisvideomediaclient.cpp
  kinesisvideomediarequest.cpp
  kinesisvideomediaresponse.cpp
  getmediarequest.cpp
  getmediaresponse.cpp
)

target_link_libraries(QtAwsKinesisVideoMedia
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)

target_compile_definitions(QtAwsKinesisVideoMedia PRIVATE QTAWSKINESISVIDEOMEDIA_LIBRARY)
