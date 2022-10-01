// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTDIRECTCONNECTGATEWAYASSOCIATIONPROPOSALRESPONSE_P_H
#define QTAWS_ACCEPTDIRECTCONNECTGATEWAYASSOCIATIONPROPOSALRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class AcceptDirectConnectGatewayAssociationProposalResponse;

class AcceptDirectConnectGatewayAssociationProposalResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit AcceptDirectConnectGatewayAssociationProposalResponsePrivate(AcceptDirectConnectGatewayAssociationProposalResponse * const q);

    void parseAcceptDirectConnectGatewayAssociationProposalResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AcceptDirectConnectGatewayAssociationProposalResponse)
    Q_DISABLE_COPY(AcceptDirectConnectGatewayAssociationProposalResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
