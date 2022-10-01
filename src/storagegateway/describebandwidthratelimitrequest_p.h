// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBANDWIDTHRATELIMITREQUEST_P_H
#define QTAWS_DESCRIBEBANDWIDTHRATELIMITREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "describebandwidthratelimitrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeBandwidthRateLimitRequest;

class DescribeBandwidthRateLimitRequestPrivate : public StorageGatewayRequestPrivate {

public:
    DescribeBandwidthRateLimitRequestPrivate(const StorageGatewayRequest::Action action,
                                   DescribeBandwidthRateLimitRequest * const q);
    DescribeBandwidthRateLimitRequestPrivate(const DescribeBandwidthRateLimitRequestPrivate &other,
                                   DescribeBandwidthRateLimitRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeBandwidthRateLimitRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
