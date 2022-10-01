// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSITGATEWAYMULTICASTDOMAINSRESPONSE_P_H
#define QTAWS_DESCRIBETRANSITGATEWAYMULTICASTDOMAINSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeTransitGatewayMulticastDomainsResponse;

class DescribeTransitGatewayMulticastDomainsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeTransitGatewayMulticastDomainsResponsePrivate(DescribeTransitGatewayMulticastDomainsResponse * const q);

    void parseDescribeTransitGatewayMulticastDomainsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTransitGatewayMulticastDomainsResponse)
    Q_DISABLE_COPY(DescribeTransitGatewayMulticastDomainsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
