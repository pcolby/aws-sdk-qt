// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSITGATEWAYCONNECTSRESPONSE_P_H
#define QTAWS_DESCRIBETRANSITGATEWAYCONNECTSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeTransitGatewayConnectsResponse;

class DescribeTransitGatewayConnectsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeTransitGatewayConnectsResponsePrivate(DescribeTransitGatewayConnectsResponse * const q);

    void parseDescribeTransitGatewayConnectsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTransitGatewayConnectsResponse)
    Q_DISABLE_COPY(DescribeTransitGatewayConnectsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
