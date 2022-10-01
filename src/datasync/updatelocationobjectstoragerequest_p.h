// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOCATIONOBJECTSTORAGEREQUEST_P_H
#define QTAWS_UPDATELOCATIONOBJECTSTORAGEREQUEST_P_H

#include "datasyncrequest_p.h"
#include "updatelocationobjectstoragerequest.h"

namespace QtAws {
namespace DataSync {

class UpdateLocationObjectStorageRequest;

class UpdateLocationObjectStorageRequestPrivate : public DataSyncRequestPrivate {

public:
    UpdateLocationObjectStorageRequestPrivate(const DataSyncRequest::Action action,
                                   UpdateLocationObjectStorageRequest * const q);
    UpdateLocationObjectStorageRequestPrivate(const UpdateLocationObjectStorageRequestPrivate &other,
                                   UpdateLocationObjectStorageRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateLocationObjectStorageRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
