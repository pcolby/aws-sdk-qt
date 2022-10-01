// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSITGATEWAYPEERINGATTACHMENTSRESPONSE_P_H
#define QTAWS_DESCRIBETRANSITGATEWAYPEERINGATTACHMENTSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeTransitGatewayPeeringAttachmentsResponse;

class DescribeTransitGatewayPeeringAttachmentsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeTransitGatewayPeeringAttachmentsResponsePrivate(DescribeTransitGatewayPeeringAttachmentsResponse * const q);

    void parseDescribeTransitGatewayPeeringAttachmentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTransitGatewayPeeringAttachmentsResponse)
    Q_DISABLE_COPY(DescribeTransitGatewayPeeringAttachmentsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
