# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

add_compile_definitions(QTAWSKINESISVIDEOARCHIVEDMEDIA_LIBRARY)

add_library(QtAwsKinesisVideoArchivedMedia
  qtawskinesisvideoarchivedmediaglobal.h
  kinesisvideoarchivedmediaclient.h
  kinesisvideoarchivedmediaclient_p.h
  kinesisvideoarchivedmediarequest.h
  kinesisvideoarchivedmediarequest_p.h
  kinesisvideoarchivedmediaresponse.h
  kinesisvideoarchivedmediaresponse_p.h
  getcliprequest.h
  getcliprequest_p.h
  getclipresponse.h
  getclipresponse_p.h
  getdashstreamingsessionurlrequest.h
  getdashstreamingsessionurlrequest_p.h
  getdashstreamingsessionurlresponse.h
  getdashstreamingsessionurlresponse_p.h
  gethlsstreamingsessionurlrequest.h
  gethlsstreamingsessionurlrequest_p.h
  gethlsstreamingsessionurlresponse.h
  gethlsstreamingsessionurlresponse_p.h
  getimagesrequest.h
  getimagesrequest_p.h
  getimagesresponse.h
  getimagesresponse_p.h
  getmediaforfragmentlistrequest.h
  getmediaforfragmentlistrequest_p.h
  getmediaforfragmentlistresponse.h
  getmediaforfragmentlistresponse_p.h
  listfragmentsrequest.h
  listfragmentsrequest_p.h
  listfragmentsresponse.h
  listfragmentsresponse_p.h
  kinesisvideoarchivedmediaclient.cpp
  kinesisvideoarchivedmediarequest.cpp
  kinesisvideoarchivedmediaresponse.cpp
  getcliprequest.cpp
  getclipresponse.cpp
  getdashstreamingsessionurlrequest.cpp
  getdashstreamingsessionurlresponse.cpp
  gethlsstreamingsessionurlrequest.cpp
  gethlsstreamingsessionurlresponse.cpp
  getimagesrequest.cpp
  getimagesresponse.cpp
  getmediaforfragmentlistrequest.cpp
  getmediaforfragmentlistresponse.cpp
  listfragmentsrequest.cpp
  listfragmentsresponse.cpp)

target_link_libraries(QtAwsKinesisVideoArchivedMedia
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
