// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAVAILABILITYMONITORTESTREQUEST_P_H
#define QTAWS_DESCRIBEAVAILABILITYMONITORTESTREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "describeavailabilitymonitortestrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeAvailabilityMonitorTestRequest;

class DescribeAvailabilityMonitorTestRequestPrivate : public StorageGatewayRequestPrivate {

public:
    DescribeAvailabilityMonitorTestRequestPrivate(const StorageGatewayRequest::Action action,
                                   DescribeAvailabilityMonitorTestRequest * const q);
    DescribeAvailabilityMonitorTestRequestPrivate(const DescribeAvailabilityMonitorTestRequestPrivate &other,
                                   DescribeAvailabilityMonitorTestRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAvailabilityMonitorTestRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
