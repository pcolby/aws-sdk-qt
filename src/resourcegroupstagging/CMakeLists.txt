# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

cmake_minimum_required(VERSION 3.0)

add_library(
  QtAwsResourceGroupsTagging
  qtawsresourcegroupstaggingglobal.h
  resourcegroupstaggingclient.h
  resourcegroupstaggingclient_p.h
  resourcegroupstaggingrequest.h
  resourcegroupstaggingrequest_p.h
  resourcegroupstaggingresponse.h
  resourcegroupstaggingresponse_p.h
  describereportcreationrequest.h
  describereportcreationrequest_p.h
  describereportcreationresponse.h
  describereportcreationresponse_p.h
  getcompliancesummaryrequest.h
  getcompliancesummaryrequest_p.h
  getcompliancesummaryresponse.h
  getcompliancesummaryresponse_p.h
  getresourcesrequest.h
  getresourcesrequest_p.h
  getresourcesresponse.h
  getresourcesresponse_p.h
  gettagkeysrequest.h
  gettagkeysrequest_p.h
  gettagkeysresponse.h
  gettagkeysresponse_p.h
  gettagvaluesrequest.h
  gettagvaluesrequest_p.h
  gettagvaluesresponse.h
  gettagvaluesresponse_p.h
  startreportcreationrequest.h
  startreportcreationrequest_p.h
  startreportcreationresponse.h
  startreportcreationresponse_p.h
  tagresourcesrequest.h
  tagresourcesrequest_p.h
  tagresourcesresponse.h
  tagresourcesresponse_p.h
  untagresourcesrequest.h
  untagresourcesrequest_p.h
  untagresourcesresponse.h
  untagresourcesresponse_p.h
  resourcegroupstaggingclient.cpp
  resourcegroupstaggingrequest.cpp
  resourcegroupstaggingresponse.cpp
  describereportcreationrequest.cpp
  describereportcreationresponse.cpp
  getcompliancesummaryrequest.cpp
  getcompliancesummaryresponse.cpp
  getresourcesrequest.cpp
  getresourcesresponse.cpp
  gettagkeysrequest.cpp
  gettagkeysresponse.cpp
  gettagvaluesrequest.cpp
  gettagvaluesresponse.cpp
  startreportcreationrequest.cpp
  startreportcreationresponse.cpp
  tagresourcesrequest.cpp
  tagresourcesresponse.cpp
  untagresourcesrequest.cpp
  untagresourcesresponse.cpp
)

target_link_libraries(QtAwsResourceGroupsTagging
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)

target_compile_definitions(QtAwsResourceGroupsTagging PRIVATE QTAWSRESOURCEGROUPSTAGGING_LIBRARY)
