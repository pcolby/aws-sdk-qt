// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBANDWIDTHRATELIMITREQUEST_P_H
#define QTAWS_UPDATEBANDWIDTHRATELIMITREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "updatebandwidthratelimitrequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateBandwidthRateLimitRequest;

class UpdateBandwidthRateLimitRequestPrivate : public StorageGatewayRequestPrivate {

public:
    UpdateBandwidthRateLimitRequestPrivate(const StorageGatewayRequest::Action action,
                                   UpdateBandwidthRateLimitRequest * const q);
    UpdateBandwidthRateLimitRequestPrivate(const UpdateBandwidthRateLimitRequestPrivate &other,
                                   UpdateBandwidthRateLimitRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateBandwidthRateLimitRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
