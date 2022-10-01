// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBANDWIDTHRATELIMITREQUEST_H
#define QTAWS_UPDATEBANDWIDTHRATELIMITREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateBandwidthRateLimitRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT UpdateBandwidthRateLimitRequest : public StorageGatewayRequest {

public:
    UpdateBandwidthRateLimitRequest(const UpdateBandwidthRateLimitRequest &other);
    UpdateBandwidthRateLimitRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBandwidthRateLimitRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
