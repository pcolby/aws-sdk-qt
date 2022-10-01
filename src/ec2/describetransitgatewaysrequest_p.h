// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSITGATEWAYSREQUEST_P_H
#define QTAWS_DESCRIBETRANSITGATEWAYSREQUEST_P_H

#include "ec2request_p.h"
#include "describetransitgatewaysrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeTransitGatewaysRequest;

class DescribeTransitGatewaysRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeTransitGatewaysRequestPrivate(const Ec2Request::Action action,
                                   DescribeTransitGatewaysRequest * const q);
    DescribeTransitGatewaysRequestPrivate(const DescribeTransitGatewaysRequestPrivate &other,
                                   DescribeTransitGatewaysRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTransitGatewaysRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
