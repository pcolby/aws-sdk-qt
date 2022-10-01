// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSITGATEWAYPOLICYTABLESRESPONSE_P_H
#define QTAWS_DESCRIBETRANSITGATEWAYPOLICYTABLESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeTransitGatewayPolicyTablesResponse;

class DescribeTransitGatewayPolicyTablesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeTransitGatewayPolicyTablesResponsePrivate(DescribeTransitGatewayPolicyTablesResponse * const q);

    void parseDescribeTransitGatewayPolicyTablesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTransitGatewayPolicyTablesResponse)
    Q_DISABLE_COPY(DescribeTransitGatewayPolicyTablesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
