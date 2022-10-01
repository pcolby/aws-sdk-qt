// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEGRESSONLYINTERNETGATEWAYSRESPONSE_P_H
#define QTAWS_DESCRIBEEGRESSONLYINTERNETGATEWAYSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeEgressOnlyInternetGatewaysResponse;

class DescribeEgressOnlyInternetGatewaysResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeEgressOnlyInternetGatewaysResponsePrivate(DescribeEgressOnlyInternetGatewaysResponse * const q);

    void parseDescribeEgressOnlyInternetGatewaysResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEgressOnlyInternetGatewaysResponse)
    Q_DISABLE_COPY(DescribeEgressOnlyInternetGatewaysResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
