// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDIRECTCONNECTGATEWAYASSOCIATIONREQUEST_H
#define QTAWS_DELETEDIRECTCONNECTGATEWAYASSOCIATIONREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class DeleteDirectConnectGatewayAssociationRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT DeleteDirectConnectGatewayAssociationRequest : public DirectConnectRequest {

public:
    DeleteDirectConnectGatewayAssociationRequest(const DeleteDirectConnectGatewayAssociationRequest &other);
    DeleteDirectConnectGatewayAssociationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDirectConnectGatewayAssociationRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
