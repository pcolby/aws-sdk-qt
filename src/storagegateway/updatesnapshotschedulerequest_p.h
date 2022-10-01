// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESNAPSHOTSCHEDULEREQUEST_P_H
#define QTAWS_UPDATESNAPSHOTSCHEDULEREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "updatesnapshotschedulerequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateSnapshotScheduleRequest;

class UpdateSnapshotScheduleRequestPrivate : public StorageGatewayRequestPrivate {

public:
    UpdateSnapshotScheduleRequestPrivate(const StorageGatewayRequest::Action action,
                                   UpdateSnapshotScheduleRequest * const q);
    UpdateSnapshotScheduleRequestPrivate(const UpdateSnapshotScheduleRequestPrivate &other,
                                   UpdateSnapshotScheduleRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSnapshotScheduleRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
