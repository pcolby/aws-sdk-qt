// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDIRECTCONNECTGATEWAYASSOCIATIONREQUEST_P_H
#define QTAWS_UPDATEDIRECTCONNECTGATEWAYASSOCIATIONREQUEST_P_H

#include "directconnectrequest_p.h"
#include "updatedirectconnectgatewayassociationrequest.h"

namespace QtAws {
namespace DirectConnect {

class UpdateDirectConnectGatewayAssociationRequest;

class UpdateDirectConnectGatewayAssociationRequestPrivate : public DirectConnectRequestPrivate {

public:
    UpdateDirectConnectGatewayAssociationRequestPrivate(const DirectConnectRequest::Action action,
                                   UpdateDirectConnectGatewayAssociationRequest * const q);
    UpdateDirectConnectGatewayAssociationRequestPrivate(const UpdateDirectConnectGatewayAssociationRequestPrivate &other,
                                   UpdateDirectConnectGatewayAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDirectConnectGatewayAssociationRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
