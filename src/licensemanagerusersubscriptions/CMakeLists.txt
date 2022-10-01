# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

cmake_minimum_required(VERSION 3.0)

add_library(
  QtAwsLicenseManagerUserSubscriptions
  qtawslicensemanagerusersubscriptionsglobal.h
  licensemanagerusersubscriptionsclient.h
  licensemanagerusersubscriptionsclient_p.h
  licensemanagerusersubscriptionsrequest.h
  licensemanagerusersubscriptionsrequest_p.h
  licensemanagerusersubscriptionsresponse.h
  licensemanagerusersubscriptionsresponse_p.h
  associateuserrequest.h
  associateuserrequest_p.h
  associateuserresponse.h
  associateuserresponse_p.h
  deregisteridentityproviderrequest.h
  deregisteridentityproviderrequest_p.h
  deregisteridentityproviderresponse.h
  deregisteridentityproviderresponse_p.h
  disassociateuserrequest.h
  disassociateuserrequest_p.h
  disassociateuserresponse.h
  disassociateuserresponse_p.h
  listidentityprovidersrequest.h
  listidentityprovidersrequest_p.h
  listidentityprovidersresponse.h
  listidentityprovidersresponse_p.h
  listinstancesrequest.h
  listinstancesrequest_p.h
  listinstancesresponse.h
  listinstancesresponse_p.h
  listproductsubscriptionsrequest.h
  listproductsubscriptionsrequest_p.h
  listproductsubscriptionsresponse.h
  listproductsubscriptionsresponse_p.h
  listuserassociationsrequest.h
  listuserassociationsrequest_p.h
  listuserassociationsresponse.h
  listuserassociationsresponse_p.h
  registeridentityproviderrequest.h
  registeridentityproviderrequest_p.h
  registeridentityproviderresponse.h
  registeridentityproviderresponse_p.h
  startproductsubscriptionrequest.h
  startproductsubscriptionrequest_p.h
  startproductsubscriptionresponse.h
  startproductsubscriptionresponse_p.h
  stopproductsubscriptionrequest.h
  stopproductsubscriptionrequest_p.h
  stopproductsubscriptionresponse.h
  stopproductsubscriptionresponse_p.h
  licensemanagerusersubscriptionsclient.cpp
  licensemanagerusersubscriptionsrequest.cpp
  licensemanagerusersubscriptionsresponse.cpp
  associateuserrequest.cpp
  associateuserresponse.cpp
  deregisteridentityproviderrequest.cpp
  deregisteridentityproviderresponse.cpp
  disassociateuserrequest.cpp
  disassociateuserresponse.cpp
  listidentityprovidersrequest.cpp
  listidentityprovidersresponse.cpp
  listinstancesrequest.cpp
  listinstancesresponse.cpp
  listproductsubscriptionsrequest.cpp
  listproductsubscriptionsresponse.cpp
  listuserassociationsrequest.cpp
  listuserassociationsresponse.cpp
  registeridentityproviderrequest.cpp
  registeridentityproviderresponse.cpp
  startproductsubscriptionrequest.cpp
  startproductsubscriptionresponse.cpp
  stopproductsubscriptionrequest.cpp
  stopproductsubscriptionresponse.cpp
)

target_link_libraries(QtAwsLicenseManagerUserSubscriptions
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)

target_compile_definitions(QtAwsLicenseManagerUserSubscriptions PRIVATE QTAWSLICENSEMANAGERUSERSUBSCRIPTIONS_LIBRARY)
