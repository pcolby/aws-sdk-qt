// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDIRECTCONNECTGATEWAYASSOCIATIONPROPOSALRESPONSE_P_H
#define QTAWS_DELETEDIRECTCONNECTGATEWAYASSOCIATIONPROPOSALRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class DeleteDirectConnectGatewayAssociationProposalResponse;

class DeleteDirectConnectGatewayAssociationProposalResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit DeleteDirectConnectGatewayAssociationProposalResponsePrivate(DeleteDirectConnectGatewayAssociationProposalResponse * const q);

    void parseDeleteDirectConnectGatewayAssociationProposalResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDirectConnectGatewayAssociationProposalResponse)
    Q_DISABLE_COPY(DeleteDirectConnectGatewayAssociationProposalResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
