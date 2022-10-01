// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSITGATEWAYCONNECTPEERSRESPONSE_P_H
#define QTAWS_DESCRIBETRANSITGATEWAYCONNECTPEERSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeTransitGatewayConnectPeersResponse;

class DescribeTransitGatewayConnectPeersResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeTransitGatewayConnectPeersResponsePrivate(DescribeTransitGatewayConnectPeersResponse * const q);

    void parseDescribeTransitGatewayConnectPeersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTransitGatewayConnectPeersResponse)
    Q_DISABLE_COPY(DescribeTransitGatewayConnectPeersResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
