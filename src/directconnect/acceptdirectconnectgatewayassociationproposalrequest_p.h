// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTDIRECTCONNECTGATEWAYASSOCIATIONPROPOSALREQUEST_P_H
#define QTAWS_ACCEPTDIRECTCONNECTGATEWAYASSOCIATIONPROPOSALREQUEST_P_H

#include "directconnectrequest_p.h"
#include "acceptdirectconnectgatewayassociationproposalrequest.h"

namespace QtAws {
namespace DirectConnect {

class AcceptDirectConnectGatewayAssociationProposalRequest;

class AcceptDirectConnectGatewayAssociationProposalRequestPrivate : public DirectConnectRequestPrivate {

public:
    AcceptDirectConnectGatewayAssociationProposalRequestPrivate(const DirectConnectRequest::Action action,
                                   AcceptDirectConnectGatewayAssociationProposalRequest * const q);
    AcceptDirectConnectGatewayAssociationProposalRequestPrivate(const AcceptDirectConnectGatewayAssociationProposalRequestPrivate &other,
                                   AcceptDirectConnectGatewayAssociationProposalRequest * const q);

private:
    Q_DECLARE_PUBLIC(AcceptDirectConnectGatewayAssociationProposalRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
