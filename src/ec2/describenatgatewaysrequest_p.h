// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENATGATEWAYSREQUEST_P_H
#define QTAWS_DESCRIBENATGATEWAYSREQUEST_P_H

#include "ec2request_p.h"
#include "describenatgatewaysrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeNatGatewaysRequest;

class DescribeNatGatewaysRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeNatGatewaysRequestPrivate(const Ec2Request::Action action,
                                   DescribeNatGatewaysRequest * const q);
    DescribeNatGatewaysRequestPrivate(const DescribeNatGatewaysRequestPrivate &other,
                                   DescribeNatGatewaysRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeNatGatewaysRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
