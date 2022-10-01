// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMERGATEWAYSRESPONSE_P_H
#define QTAWS_DESCRIBECUSTOMERGATEWAYSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeCustomerGatewaysResponse;

class DescribeCustomerGatewaysResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeCustomerGatewaysResponsePrivate(DescribeCustomerGatewaysResponse * const q);

    void parseDescribeCustomerGatewaysResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCustomerGatewaysResponse)
    Q_DISABLE_COPY(DescribeCustomerGatewaysResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
