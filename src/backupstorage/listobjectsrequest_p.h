// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBJECTSREQUEST_P_H
#define QTAWS_LISTOBJECTSREQUEST_P_H

#include "backupstoragerequest_p.h"
#include "listobjectsrequest.h"

namespace QtAws {
namespace BackupStorage {

class ListObjectsRequest;

class ListObjectsRequestPrivate : public BackupStorageRequestPrivate {

public:
    ListObjectsRequestPrivate(const BackupStorageRequest::Action action,
                                   ListObjectsRequest * const q);
    ListObjectsRequestPrivate(const ListObjectsRequestPrivate &other,
                                   ListObjectsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListObjectsRequest)

};

} // namespace BackupStorage
} // namespace QtAws

#endif
