# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

cmake_minimum_required(VERSION 3.0)

add_library(
  QtAwsSavingsPlans
  qtawssavingsplansglobal.h
  savingsplansclient.h
  savingsplansclient_p.h
  savingsplansrequest.h
  savingsplansrequest_p.h
  savingsplansresponse.h
  savingsplansresponse_p.h
  createsavingsplanrequest.h
  createsavingsplanrequest_p.h
  createsavingsplanresponse.h
  createsavingsplanresponse_p.h
  deletequeuedsavingsplanrequest.h
  deletequeuedsavingsplanrequest_p.h
  deletequeuedsavingsplanresponse.h
  deletequeuedsavingsplanresponse_p.h
  describesavingsplanratesrequest.h
  describesavingsplanratesrequest_p.h
  describesavingsplanratesresponse.h
  describesavingsplanratesresponse_p.h
  describesavingsplansrequest.h
  describesavingsplansrequest_p.h
  describesavingsplansresponse.h
  describesavingsplansresponse_p.h
  describesavingsplansofferingratesrequest.h
  describesavingsplansofferingratesrequest_p.h
  describesavingsplansofferingratesresponse.h
  describesavingsplansofferingratesresponse_p.h
  describesavingsplansofferingsrequest.h
  describesavingsplansofferingsrequest_p.h
  describesavingsplansofferingsresponse.h
  describesavingsplansofferingsresponse_p.h
  listtagsforresourcerequest.h
  listtagsforresourcerequest_p.h
  listtagsforresourceresponse.h
  listtagsforresourceresponse_p.h
  tagresourcerequest.h
  tagresourcerequest_p.h
  tagresourceresponse.h
  tagresourceresponse_p.h
  untagresourcerequest.h
  untagresourcerequest_p.h
  untagresourceresponse.h
  untagresourceresponse_p.h
  savingsplansclient.cpp
  savingsplansrequest.cpp
  savingsplansresponse.cpp
  createsavingsplanrequest.cpp
  createsavingsplanresponse.cpp
  deletequeuedsavingsplanrequest.cpp
  deletequeuedsavingsplanresponse.cpp
  describesavingsplanratesrequest.cpp
  describesavingsplanratesresponse.cpp
  describesavingsplansrequest.cpp
  describesavingsplansresponse.cpp
  describesavingsplansofferingratesrequest.cpp
  describesavingsplansofferingratesresponse.cpp
  describesavingsplansofferingsrequest.cpp
  describesavingsplansofferingsresponse.cpp
  listtagsforresourcerequest.cpp
  listtagsforresourceresponse.cpp
  tagresourcerequest.cpp
  tagresourceresponse.cpp
  untagresourcerequest.cpp
  untagresourceresponse.cpp
)

target_link_libraries(QtAwsSavingsPlans
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)

target_compile_definitions(QtAwsSavingsPlans PRIVATE QTAWSSAVINGSPLANS_LIBRARY)
