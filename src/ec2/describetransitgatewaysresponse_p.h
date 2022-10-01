// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSITGATEWAYSRESPONSE_P_H
#define QTAWS_DESCRIBETRANSITGATEWAYSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeTransitGatewaysResponse;

class DescribeTransitGatewaysResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeTransitGatewaysResponsePrivate(DescribeTransitGatewaysResponse * const q);

    void parseDescribeTransitGatewaysResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTransitGatewaysResponse)
    Q_DISABLE_COPY(DescribeTransitGatewaysResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
