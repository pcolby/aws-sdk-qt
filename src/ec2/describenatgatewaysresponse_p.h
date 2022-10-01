// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENATGATEWAYSRESPONSE_P_H
#define QTAWS_DESCRIBENATGATEWAYSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeNatGatewaysResponse;

class DescribeNatGatewaysResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeNatGatewaysResponsePrivate(DescribeNatGatewaysResponse * const q);

    void parseDescribeNatGatewaysResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeNatGatewaysResponse)
    Q_DISABLE_COPY(DescribeNatGatewaysResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
