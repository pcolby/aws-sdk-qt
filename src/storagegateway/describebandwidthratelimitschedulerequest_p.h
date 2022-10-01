// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBANDWIDTHRATELIMITSCHEDULEREQUEST_P_H
#define QTAWS_DESCRIBEBANDWIDTHRATELIMITSCHEDULEREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "describebandwidthratelimitschedulerequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeBandwidthRateLimitScheduleRequest;

class DescribeBandwidthRateLimitScheduleRequestPrivate : public StorageGatewayRequestPrivate {

public:
    DescribeBandwidthRateLimitScheduleRequestPrivate(const StorageGatewayRequest::Action action,
                                   DescribeBandwidthRateLimitScheduleRequest * const q);
    DescribeBandwidthRateLimitScheduleRequestPrivate(const DescribeBandwidthRateLimitScheduleRequestPrivate &other,
                                   DescribeBandwidthRateLimitScheduleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeBandwidthRateLimitScheduleRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
