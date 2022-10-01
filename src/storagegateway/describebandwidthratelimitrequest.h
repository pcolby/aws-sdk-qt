// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBANDWIDTHRATELIMITREQUEST_H
#define QTAWS_DESCRIBEBANDWIDTHRATELIMITREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeBandwidthRateLimitRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeBandwidthRateLimitRequest : public StorageGatewayRequest {

public:
    DescribeBandwidthRateLimitRequest(const DescribeBandwidthRateLimitRequest &other);
    DescribeBandwidthRateLimitRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBandwidthRateLimitRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
