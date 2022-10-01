// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDIRECTCONNECTGATEWAYASSOCIATIONREQUEST_P_H
#define QTAWS_CREATEDIRECTCONNECTGATEWAYASSOCIATIONREQUEST_P_H

#include "directconnectrequest_p.h"
#include "createdirectconnectgatewayassociationrequest.h"

namespace QtAws {
namespace DirectConnect {

class CreateDirectConnectGatewayAssociationRequest;

class CreateDirectConnectGatewayAssociationRequestPrivate : public DirectConnectRequestPrivate {

public:
    CreateDirectConnectGatewayAssociationRequestPrivate(const DirectConnectRequest::Action action,
                                   CreateDirectConnectGatewayAssociationRequest * const q);
    CreateDirectConnectGatewayAssociationRequestPrivate(const CreateDirectConnectGatewayAssociationRequestPrivate &other,
                                   CreateDirectConnectGatewayAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDirectConnectGatewayAssociationRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
