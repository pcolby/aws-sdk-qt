// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAINTENANCESTARTTIMEREQUEST_P_H
#define QTAWS_DESCRIBEMAINTENANCESTARTTIMEREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "describemaintenancestarttimerequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeMaintenanceStartTimeRequest;

class DescribeMaintenanceStartTimeRequestPrivate : public StorageGatewayRequestPrivate {

public:
    DescribeMaintenanceStartTimeRequestPrivate(const StorageGatewayRequest::Action action,
                                   DescribeMaintenanceStartTimeRequest * const q);
    DescribeMaintenanceStartTimeRequestPrivate(const DescribeMaintenanceStartTimeRequestPrivate &other,
                                   DescribeMaintenanceStartTimeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeMaintenanceStartTimeRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
