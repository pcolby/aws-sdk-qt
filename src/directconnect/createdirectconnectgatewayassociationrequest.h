// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDIRECTCONNECTGATEWAYASSOCIATIONREQUEST_H
#define QTAWS_CREATEDIRECTCONNECTGATEWAYASSOCIATIONREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class CreateDirectConnectGatewayAssociationRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT CreateDirectConnectGatewayAssociationRequest : public DirectConnectRequest {

public:
    CreateDirectConnectGatewayAssociationRequest(const CreateDirectConnectGatewayAssociationRequest &other);
    CreateDirectConnectGatewayAssociationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDirectConnectGatewayAssociationRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
