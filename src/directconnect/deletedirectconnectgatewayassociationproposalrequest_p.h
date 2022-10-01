// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDIRECTCONNECTGATEWAYASSOCIATIONPROPOSALREQUEST_P_H
#define QTAWS_DELETEDIRECTCONNECTGATEWAYASSOCIATIONPROPOSALREQUEST_P_H

#include "directconnectrequest_p.h"
#include "deletedirectconnectgatewayassociationproposalrequest.h"

namespace QtAws {
namespace DirectConnect {

class DeleteDirectConnectGatewayAssociationProposalRequest;

class DeleteDirectConnectGatewayAssociationProposalRequestPrivate : public DirectConnectRequestPrivate {

public:
    DeleteDirectConnectGatewayAssociationProposalRequestPrivate(const DirectConnectRequest::Action action,
                                   DeleteDirectConnectGatewayAssociationProposalRequest * const q);
    DeleteDirectConnectGatewayAssociationProposalRequestPrivate(const DeleteDirectConnectGatewayAssociationProposalRequestPrivate &other,
                                   DeleteDirectConnectGatewayAssociationProposalRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDirectConnectGatewayAssociationProposalRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
