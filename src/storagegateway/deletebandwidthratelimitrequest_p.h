// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBANDWIDTHRATELIMITREQUEST_P_H
#define QTAWS_DELETEBANDWIDTHRATELIMITREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "deletebandwidthratelimitrequest.h"

namespace QtAws {
namespace StorageGateway {

class DeleteBandwidthRateLimitRequest;

class DeleteBandwidthRateLimitRequestPrivate : public StorageGatewayRequestPrivate {

public:
    DeleteBandwidthRateLimitRequestPrivate(const StorageGatewayRequest::Action action,
                                   DeleteBandwidthRateLimitRequest * const q);
    DeleteBandwidthRateLimitRequestPrivate(const DeleteBandwidthRateLimitRequestPrivate &other,
                                   DeleteBandwidthRateLimitRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBandwidthRateLimitRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
