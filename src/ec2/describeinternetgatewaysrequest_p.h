// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINTERNETGATEWAYSREQUEST_P_H
#define QTAWS_DESCRIBEINTERNETGATEWAYSREQUEST_P_H

#include "ec2request_p.h"
#include "describeinternetgatewaysrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeInternetGatewaysRequest;

class DescribeInternetGatewaysRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeInternetGatewaysRequestPrivate(const Ec2Request::Action action,
                                   DescribeInternetGatewaysRequest * const q);
    DescribeInternetGatewaysRequestPrivate(const DescribeInternetGatewaysRequestPrivate &other,
                                   DescribeInternetGatewaysRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInternetGatewaysRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
