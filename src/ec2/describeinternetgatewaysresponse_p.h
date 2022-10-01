// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINTERNETGATEWAYSRESPONSE_P_H
#define QTAWS_DESCRIBEINTERNETGATEWAYSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeInternetGatewaysResponse;

class DescribeInternetGatewaysResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeInternetGatewaysResponsePrivate(DescribeInternetGatewaysResponse * const q);

    void parseDescribeInternetGatewaysResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInternetGatewaysResponse)
    Q_DISABLE_COPY(DescribeInternetGatewaysResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
