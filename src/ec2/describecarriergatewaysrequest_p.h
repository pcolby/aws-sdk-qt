// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECARRIERGATEWAYSREQUEST_P_H
#define QTAWS_DESCRIBECARRIERGATEWAYSREQUEST_P_H

#include "ec2request_p.h"
#include "describecarriergatewaysrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeCarrierGatewaysRequest;

class DescribeCarrierGatewaysRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeCarrierGatewaysRequestPrivate(const Ec2Request::Action action,
                                   DescribeCarrierGatewaysRequest * const q);
    DescribeCarrierGatewaysRequestPrivate(const DescribeCarrierGatewaysRequestPrivate &other,
                                   DescribeCarrierGatewaysRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCarrierGatewaysRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
