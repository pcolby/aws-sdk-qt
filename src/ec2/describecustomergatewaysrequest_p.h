// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMERGATEWAYSREQUEST_P_H
#define QTAWS_DESCRIBECUSTOMERGATEWAYSREQUEST_P_H

#include "ec2request_p.h"
#include "describecustomergatewaysrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeCustomerGatewaysRequest;

class DescribeCustomerGatewaysRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeCustomerGatewaysRequestPrivate(const Ec2Request::Action action,
                                   DescribeCustomerGatewaysRequest * const q);
    DescribeCustomerGatewaysRequestPrivate(const DescribeCustomerGatewaysRequestPrivate &other,
                                   DescribeCustomerGatewaysRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCustomerGatewaysRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
