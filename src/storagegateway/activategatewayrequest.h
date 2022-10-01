// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATEGATEWAYREQUEST_H
#define QTAWS_ACTIVATEGATEWAYREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class ActivateGatewayRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT ActivateGatewayRequest : public StorageGatewayRequest {

public:
    ActivateGatewayRequest(const ActivateGatewayRequest &other);
    ActivateGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ActivateGatewayRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
