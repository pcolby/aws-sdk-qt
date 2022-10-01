// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEGRESSONLYINTERNETGATEWAYSREQUEST_P_H
#define QTAWS_DESCRIBEEGRESSONLYINTERNETGATEWAYSREQUEST_P_H

#include "ec2request_p.h"
#include "describeegressonlyinternetgatewaysrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeEgressOnlyInternetGatewaysRequest;

class DescribeEgressOnlyInternetGatewaysRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeEgressOnlyInternetGatewaysRequestPrivate(const Ec2Request::Action action,
                                   DescribeEgressOnlyInternetGatewaysRequest * const q);
    DescribeEgressOnlyInternetGatewaysRequestPrivate(const DescribeEgressOnlyInternetGatewaysRequestPrivate &other,
                                   DescribeEgressOnlyInternetGatewaysRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEgressOnlyInternetGatewaysRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
