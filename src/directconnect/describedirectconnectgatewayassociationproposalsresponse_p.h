// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDIRECTCONNECTGATEWAYASSOCIATIONPROPOSALSRESPONSE_P_H
#define QTAWS_DESCRIBEDIRECTCONNECTGATEWAYASSOCIATIONPROPOSALSRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class DescribeDirectConnectGatewayAssociationProposalsResponse;

class DescribeDirectConnectGatewayAssociationProposalsResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit DescribeDirectConnectGatewayAssociationProposalsResponsePrivate(DescribeDirectConnectGatewayAssociationProposalsResponse * const q);

    void parseDescribeDirectConnectGatewayAssociationProposalsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDirectConnectGatewayAssociationProposalsResponse)
    Q_DISABLE_COPY(DescribeDirectConnectGatewayAssociationProposalsResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
