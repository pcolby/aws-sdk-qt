// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBANDWIDTHRATELIMITREQUEST_H
#define QTAWS_DELETEBANDWIDTHRATELIMITREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class DeleteBandwidthRateLimitRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DeleteBandwidthRateLimitRequest : public StorageGatewayRequest {

public:
    DeleteBandwidthRateLimitRequest(const DeleteBandwidthRateLimitRequest &other);
    DeleteBandwidthRateLimitRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBandwidthRateLimitRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
