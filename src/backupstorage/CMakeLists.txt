# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

add_compile_definitions(QTAWSBACKUPSTORAGE_LIBRARY)

add_library(QtAwsBackupStorage
  qtawsbackupstorageglobal.h
  backupstorageclient.h
  backupstorageclient_p.h
  backupstoragerequest.h
  backupstoragerequest_p.h
  backupstorageresponse.h
  backupstorageresponse_p.h
  deleteobjectrequest.h
  deleteobjectrequest_p.h
  deleteobjectresponse.h
  deleteobjectresponse_p.h
  getchunkrequest.h
  getchunkrequest_p.h
  getchunkresponse.h
  getchunkresponse_p.h
  getobjectmetadatarequest.h
  getobjectmetadatarequest_p.h
  getobjectmetadataresponse.h
  getobjectmetadataresponse_p.h
  listchunksrequest.h
  listchunksrequest_p.h
  listchunksresponse.h
  listchunksresponse_p.h
  listobjectsrequest.h
  listobjectsrequest_p.h
  listobjectsresponse.h
  listobjectsresponse_p.h
  notifyobjectcompleterequest.h
  notifyobjectcompleterequest_p.h
  notifyobjectcompleteresponse.h
  notifyobjectcompleteresponse_p.h
  putchunkrequest.h
  putchunkrequest_p.h
  putchunkresponse.h
  putchunkresponse_p.h
  putobjectrequest.h
  putobjectrequest_p.h
  putobjectresponse.h
  putobjectresponse_p.h
  startobjectrequest.h
  startobjectrequest_p.h
  startobjectresponse.h
  startobjectresponse_p.h
  backupstorageclient.cpp
  backupstoragerequest.cpp
  backupstorageresponse.cpp
  deleteobjectrequest.cpp
  deleteobjectresponse.cpp
  getchunkrequest.cpp
  getchunkresponse.cpp
  getobjectmetadatarequest.cpp
  getobjectmetadataresponse.cpp
  listchunksrequest.cpp
  listchunksresponse.cpp
  listobjectsrequest.cpp
  listobjectsresponse.cpp
  notifyobjectcompleterequest.cpp
  notifyobjectcompleteresponse.cpp
  putchunkrequest.cpp
  putchunkresponse.cpp
  putobjectrequest.cpp
  putobjectresponse.cpp
  startobjectrequest.cpp
  startobjectresponse.cpp)

target_link_libraries(QtAwsBackupStorage
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
