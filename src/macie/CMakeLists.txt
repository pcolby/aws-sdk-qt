# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

cmake_minimum_required(VERSION 3.0)

add_library(
  QtAwsMacie
  qtawsmacieglobal.h
  macieclient.h
  macieclient_p.h
  macierequest.h
  macierequest_p.h
  macieresponse.h
  macieresponse_p.h
  associatememberaccountrequest.h
  associatememberaccountrequest_p.h
  associatememberaccountresponse.h
  associatememberaccountresponse_p.h
  associates3resourcesrequest.h
  associates3resourcesrequest_p.h
  associates3resourcesresponse.h
  associates3resourcesresponse_p.h
  disassociatememberaccountrequest.h
  disassociatememberaccountrequest_p.h
  disassociatememberaccountresponse.h
  disassociatememberaccountresponse_p.h
  disassociates3resourcesrequest.h
  disassociates3resourcesrequest_p.h
  disassociates3resourcesresponse.h
  disassociates3resourcesresponse_p.h
  listmemberaccountsrequest.h
  listmemberaccountsrequest_p.h
  listmemberaccountsresponse.h
  listmemberaccountsresponse_p.h
  lists3resourcesrequest.h
  lists3resourcesrequest_p.h
  lists3resourcesresponse.h
  lists3resourcesresponse_p.h
  updates3resourcesrequest.h
  updates3resourcesrequest_p.h
  updates3resourcesresponse.h
  updates3resourcesresponse_p.h
  macieclient.cpp
  macierequest.cpp
  macieresponse.cpp
  associatememberaccountrequest.cpp
  associatememberaccountresponse.cpp
  associates3resourcesrequest.cpp
  associates3resourcesresponse.cpp
  disassociatememberaccountrequest.cpp
  disassociatememberaccountresponse.cpp
  disassociates3resourcesrequest.cpp
  disassociates3resourcesresponse.cpp
  listmemberaccountsrequest.cpp
  listmemberaccountsresponse.cpp
  lists3resourcesrequest.cpp
  lists3resourcesresponse.cpp
  updates3resourcesrequest.cpp
  updates3resourcesresponse.cpp
)

target_link_libraries(QtAwsMacie
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)

target_compile_definitions(QtAwsMacie PRIVATE QTAWSMACIE_LIBRARY)
