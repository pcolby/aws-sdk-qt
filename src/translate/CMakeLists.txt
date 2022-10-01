# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

cmake_minimum_required(VERSION 3.0)

add_library(
  QtAwsTranslate
  qtawstranslateglobal.h
  translateclient.h
  translateclient_p.h
  translaterequest.h
  translaterequest_p.h
  translateresponse.h
  translateresponse_p.h
  createparalleldatarequest.h
  createparalleldatarequest_p.h
  createparalleldataresponse.h
  createparalleldataresponse_p.h
  deleteparalleldatarequest.h
  deleteparalleldatarequest_p.h
  deleteparalleldataresponse.h
  deleteparalleldataresponse_p.h
  deleteterminologyrequest.h
  deleteterminologyrequest_p.h
  deleteterminologyresponse.h
  deleteterminologyresponse_p.h
  describetexttranslationjobrequest.h
  describetexttranslationjobrequest_p.h
  describetexttranslationjobresponse.h
  describetexttranslationjobresponse_p.h
  getparalleldatarequest.h
  getparalleldatarequest_p.h
  getparalleldataresponse.h
  getparalleldataresponse_p.h
  getterminologyrequest.h
  getterminologyrequest_p.h
  getterminologyresponse.h
  getterminologyresponse_p.h
  importterminologyrequest.h
  importterminologyrequest_p.h
  importterminologyresponse.h
  importterminologyresponse_p.h
  listlanguagesrequest.h
  listlanguagesrequest_p.h
  listlanguagesresponse.h
  listlanguagesresponse_p.h
  listparalleldatarequest.h
  listparalleldatarequest_p.h
  listparalleldataresponse.h
  listparalleldataresponse_p.h
  listterminologiesrequest.h
  listterminologiesrequest_p.h
  listterminologiesresponse.h
  listterminologiesresponse_p.h
  listtexttranslationjobsrequest.h
  listtexttranslationjobsrequest_p.h
  listtexttranslationjobsresponse.h
  listtexttranslationjobsresponse_p.h
  starttexttranslationjobrequest.h
  starttexttranslationjobrequest_p.h
  starttexttranslationjobresponse.h
  starttexttranslationjobresponse_p.h
  stoptexttranslationjobrequest.h
  stoptexttranslationjobrequest_p.h
  stoptexttranslationjobresponse.h
  stoptexttranslationjobresponse_p.h
  translatetextrequest.h
  translatetextrequest_p.h
  translatetextresponse.h
  translatetextresponse_p.h
  updateparalleldatarequest.h
  updateparalleldatarequest_p.h
  updateparalleldataresponse.h
  updateparalleldataresponse_p.h
  translateclient.cpp
  translaterequest.cpp
  translateresponse.cpp
  createparalleldatarequest.cpp
  createparalleldataresponse.cpp
  deleteparalleldatarequest.cpp
  deleteparalleldataresponse.cpp
  deleteterminologyrequest.cpp
  deleteterminologyresponse.cpp
  describetexttranslationjobrequest.cpp
  describetexttranslationjobresponse.cpp
  getparalleldatarequest.cpp
  getparalleldataresponse.cpp
  getterminologyrequest.cpp
  getterminologyresponse.cpp
  importterminologyrequest.cpp
  importterminologyresponse.cpp
  listlanguagesrequest.cpp
  listlanguagesresponse.cpp
  listparalleldatarequest.cpp
  listparalleldataresponse.cpp
  listterminologiesrequest.cpp
  listterminologiesresponse.cpp
  listtexttranslationjobsrequest.cpp
  listtexttranslationjobsresponse.cpp
  starttexttranslationjobrequest.cpp
  starttexttranslationjobresponse.cpp
  stoptexttranslationjobrequest.cpp
  stoptexttranslationjobresponse.cpp
  translatetextrequest.cpp
  translatetextresponse.cpp
  updateparalleldatarequest.cpp
  updateparalleldataresponse.cpp
)

target_link_libraries(QtAwsTranslate
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)

target_compile_definitions(QtAwsTranslate PRIVATE QTAWSTRANSLATE_LIBRARY)
