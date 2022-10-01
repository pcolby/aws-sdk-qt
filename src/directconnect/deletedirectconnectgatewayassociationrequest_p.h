// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDIRECTCONNECTGATEWAYASSOCIATIONREQUEST_P_H
#define QTAWS_DELETEDIRECTCONNECTGATEWAYASSOCIATIONREQUEST_P_H

#include "directconnectrequest_p.h"
#include "deletedirectconnectgatewayassociationrequest.h"

namespace QtAws {
namespace DirectConnect {

class DeleteDirectConnectGatewayAssociationRequest;

class DeleteDirectConnectGatewayAssociationRequestPrivate : public DirectConnectRequestPrivate {

public:
    DeleteDirectConnectGatewayAssociationRequestPrivate(const DirectConnectRequest::Action action,
                                   DeleteDirectConnectGatewayAssociationRequest * const q);
    DeleteDirectConnectGatewayAssociationRequestPrivate(const DeleteDirectConnectGatewayAssociationRequestPrivate &other,
                                   DeleteDirectConnectGatewayAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDirectConnectGatewayAssociationRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
