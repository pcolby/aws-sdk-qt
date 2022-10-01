// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBANDWIDTHRATELIMITSCHEDULEREQUEST_H
#define QTAWS_DESCRIBEBANDWIDTHRATELIMITSCHEDULEREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeBandwidthRateLimitScheduleRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeBandwidthRateLimitScheduleRequest : public StorageGatewayRequest {

public:
    DescribeBandwidthRateLimitScheduleRequest(const DescribeBandwidthRateLimitScheduleRequest &other);
    DescribeBandwidthRateLimitScheduleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBandwidthRateLimitScheduleRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
