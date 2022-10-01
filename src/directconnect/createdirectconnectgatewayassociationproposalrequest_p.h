// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDIRECTCONNECTGATEWAYASSOCIATIONPROPOSALREQUEST_P_H
#define QTAWS_CREATEDIRECTCONNECTGATEWAYASSOCIATIONPROPOSALREQUEST_P_H

#include "directconnectrequest_p.h"
#include "createdirectconnectgatewayassociationproposalrequest.h"

namespace QtAws {
namespace DirectConnect {

class CreateDirectConnectGatewayAssociationProposalRequest;

class CreateDirectConnectGatewayAssociationProposalRequestPrivate : public DirectConnectRequestPrivate {

public:
    CreateDirectConnectGatewayAssociationProposalRequestPrivate(const DirectConnectRequest::Action action,
                                   CreateDirectConnectGatewayAssociationProposalRequest * const q);
    CreateDirectConnectGatewayAssociationProposalRequestPrivate(const CreateDirectConnectGatewayAssociationProposalRequestPrivate &other,
                                   CreateDirectConnectGatewayAssociationProposalRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDirectConnectGatewayAssociationProposalRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
