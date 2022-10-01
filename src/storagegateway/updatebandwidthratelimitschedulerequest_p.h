// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBANDWIDTHRATELIMITSCHEDULEREQUEST_P_H
#define QTAWS_UPDATEBANDWIDTHRATELIMITSCHEDULEREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "updatebandwidthratelimitschedulerequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateBandwidthRateLimitScheduleRequest;

class UpdateBandwidthRateLimitScheduleRequestPrivate : public StorageGatewayRequestPrivate {

public:
    UpdateBandwidthRateLimitScheduleRequestPrivate(const StorageGatewayRequest::Action action,
                                   UpdateBandwidthRateLimitScheduleRequest * const q);
    UpdateBandwidthRateLimitScheduleRequestPrivate(const UpdateBandwidthRateLimitScheduleRequestPrivate &other,
                                   UpdateBandwidthRateLimitScheduleRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateBandwidthRateLimitScheduleRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
