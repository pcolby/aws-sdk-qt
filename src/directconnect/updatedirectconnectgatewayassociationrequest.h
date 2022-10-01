// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDIRECTCONNECTGATEWAYASSOCIATIONREQUEST_H
#define QTAWS_UPDATEDIRECTCONNECTGATEWAYASSOCIATIONREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class UpdateDirectConnectGatewayAssociationRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT UpdateDirectConnectGatewayAssociationRequest : public DirectConnectRequest {

public:
    UpdateDirectConnectGatewayAssociationRequest(const UpdateDirectConnectGatewayAssociationRequest &other);
    UpdateDirectConnectGatewayAssociationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDirectConnectGatewayAssociationRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
