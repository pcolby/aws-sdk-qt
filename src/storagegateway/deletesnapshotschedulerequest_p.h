// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESNAPSHOTSCHEDULEREQUEST_P_H
#define QTAWS_DELETESNAPSHOTSCHEDULEREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "deletesnapshotschedulerequest.h"

namespace QtAws {
namespace StorageGateway {

class DeleteSnapshotScheduleRequest;

class DeleteSnapshotScheduleRequestPrivate : public StorageGatewayRequestPrivate {

public:
    DeleteSnapshotScheduleRequestPrivate(const StorageGatewayRequest::Action action,
                                   DeleteSnapshotScheduleRequest * const q);
    DeleteSnapshotScheduleRequestPrivate(const DeleteSnapshotScheduleRequestPrivate &other,
                                   DeleteSnapshotScheduleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSnapshotScheduleRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
