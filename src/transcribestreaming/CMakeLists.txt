# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

add_compile_definitions(QTAWSTRANSCRIBESTREAMING_LIBRARY)

add_library(QtAwsTranscribeStreaming
  qtawstranscribestreamingglobal.h
  transcribestreamingclient.h
  transcribestreamingclient_p.h
  transcribestreamingrequest.h
  transcribestreamingrequest_p.h
  transcribestreamingresponse.h
  transcribestreamingresponse_p.h
  startmedicalstreamtranscriptionrequest.h
  startmedicalstreamtranscriptionrequest_p.h
  startmedicalstreamtranscriptionresponse.h
  startmedicalstreamtranscriptionresponse_p.h
  startstreamtranscriptionrequest.h
  startstreamtranscriptionrequest_p.h
  startstreamtranscriptionresponse.h
  startstreamtranscriptionresponse_p.h
  transcribestreamingclient.cpp
  transcribestreamingrequest.cpp
  transcribestreamingresponse.cpp
  startmedicalstreamtranscriptionrequest.cpp
  startmedicalstreamtranscriptionresponse.cpp
  startstreamtranscriptionrequest.cpp
  startstreamtranscriptionresponse.cpp)

target_link_libraries(QtAwsTranscribeStreaming
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
