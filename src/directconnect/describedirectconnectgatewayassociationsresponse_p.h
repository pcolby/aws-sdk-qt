// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDIRECTCONNECTGATEWAYASSOCIATIONSRESPONSE_P_H
#define QTAWS_DESCRIBEDIRECTCONNECTGATEWAYASSOCIATIONSRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class DescribeDirectConnectGatewayAssociationsResponse;

class DescribeDirectConnectGatewayAssociationsResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit DescribeDirectConnectGatewayAssociationsResponsePrivate(DescribeDirectConnectGatewayAssociationsResponse * const q);

    void parseDescribeDirectConnectGatewayAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDirectConnectGatewayAssociationsResponse)
    Q_DISABLE_COPY(DescribeDirectConnectGatewayAssociationsResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
