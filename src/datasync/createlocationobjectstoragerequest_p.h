// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONOBJECTSTORAGEREQUEST_P_H
#define QTAWS_CREATELOCATIONOBJECTSTORAGEREQUEST_P_H

#include "datasyncrequest_p.h"
#include "createlocationobjectstoragerequest.h"

namespace QtAws {
namespace DataSync {

class CreateLocationObjectStorageRequest;

class CreateLocationObjectStorageRequestPrivate : public DataSyncRequestPrivate {

public:
    CreateLocationObjectStorageRequestPrivate(const DataSyncRequest::Action action,
                                   CreateLocationObjectStorageRequest * const q);
    CreateLocationObjectStorageRequestPrivate(const CreateLocationObjectStorageRequestPrivate &other,
                                   CreateLocationObjectStorageRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLocationObjectStorageRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
