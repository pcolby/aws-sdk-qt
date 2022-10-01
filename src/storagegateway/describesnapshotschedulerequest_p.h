// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESNAPSHOTSCHEDULEREQUEST_P_H
#define QTAWS_DESCRIBESNAPSHOTSCHEDULEREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "describesnapshotschedulerequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeSnapshotScheduleRequest;

class DescribeSnapshotScheduleRequestPrivate : public StorageGatewayRequestPrivate {

public:
    DescribeSnapshotScheduleRequestPrivate(const StorageGatewayRequest::Action action,
                                   DescribeSnapshotScheduleRequest * const q);
    DescribeSnapshotScheduleRequestPrivate(const DescribeSnapshotScheduleRequestPrivate &other,
                                   DescribeSnapshotScheduleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSnapshotScheduleRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
