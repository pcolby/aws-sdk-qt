// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTMETADATAREQUEST_P_H
#define QTAWS_GETOBJECTMETADATAREQUEST_P_H

#include "backupstoragerequest_p.h"
#include "getobjectmetadatarequest.h"

namespace QtAws {
namespace BackupStorage {

class GetObjectMetadataRequest;

class GetObjectMetadataRequestPrivate : public BackupStorageRequestPrivate {

public:
    GetObjectMetadataRequestPrivate(const BackupStorageRequest::Action action,
                                   GetObjectMetadataRequest * const q);
    GetObjectMetadataRequestPrivate(const GetObjectMetadataRequestPrivate &other,
                                   GetObjectMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetObjectMetadataRequest)

};

} // namespace BackupStorage
} // namespace QtAws

#endif
