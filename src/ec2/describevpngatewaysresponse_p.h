// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPNGATEWAYSRESPONSE_P_H
#define QTAWS_DESCRIBEVPNGATEWAYSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpnGatewaysResponse;

class DescribeVpnGatewaysResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeVpnGatewaysResponsePrivate(DescribeVpnGatewaysResponse * const q);

    void parseDescribeVpnGatewaysResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeVpnGatewaysResponse)
    Q_DISABLE_COPY(DescribeVpnGatewaysResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
