// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SHUTDOWNGATEWAYREQUEST_H
#define QTAWS_SHUTDOWNGATEWAYREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class ShutdownGatewayRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT ShutdownGatewayRequest : public StorageGatewayRequest {

public:
    ShutdownGatewayRequest(const ShutdownGatewayRequest &other);
    ShutdownGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ShutdownGatewayRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
