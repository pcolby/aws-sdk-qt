// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDIRECTCONNECTGATEWAYREQUEST_H
#define QTAWS_CREATEDIRECTCONNECTGATEWAYREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class CreateDirectConnectGatewayRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT CreateDirectConnectGatewayRequest : public DirectConnectRequest {

public:
    CreateDirectConnectGatewayRequest(const CreateDirectConnectGatewayRequest &other);
    CreateDirectConnectGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDirectConnectGatewayRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
