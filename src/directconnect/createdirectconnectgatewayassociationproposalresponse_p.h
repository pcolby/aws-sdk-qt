// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDIRECTCONNECTGATEWAYASSOCIATIONPROPOSALRESPONSE_P_H
#define QTAWS_CREATEDIRECTCONNECTGATEWAYASSOCIATIONPROPOSALRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class CreateDirectConnectGatewayAssociationProposalResponse;

class CreateDirectConnectGatewayAssociationProposalResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit CreateDirectConnectGatewayAssociationProposalResponsePrivate(CreateDirectConnectGatewayAssociationProposalResponse * const q);

    void parseCreateDirectConnectGatewayAssociationProposalResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDirectConnectGatewayAssociationProposalResponse)
    Q_DISABLE_COPY(CreateDirectConnectGatewayAssociationProposalResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
