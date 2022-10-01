// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSITGATEWAYATTACHMENTSRESPONSE_P_H
#define QTAWS_DESCRIBETRANSITGATEWAYATTACHMENTSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeTransitGatewayAttachmentsResponse;

class DescribeTransitGatewayAttachmentsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeTransitGatewayAttachmentsResponsePrivate(DescribeTransitGatewayAttachmentsResponse * const q);

    void parseDescribeTransitGatewayAttachmentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTransitGatewayAttachmentsResponse)
    Q_DISABLE_COPY(DescribeTransitGatewayAttachmentsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
