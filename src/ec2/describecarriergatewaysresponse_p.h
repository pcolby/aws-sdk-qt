// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECARRIERGATEWAYSRESPONSE_P_H
#define QTAWS_DESCRIBECARRIERGATEWAYSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeCarrierGatewaysResponse;

class DescribeCarrierGatewaysResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeCarrierGatewaysResponsePrivate(DescribeCarrierGatewaysResponse * const q);

    void parseDescribeCarrierGatewaysResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCarrierGatewaysResponse)
    Q_DISABLE_COPY(DescribeCarrierGatewaysResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
