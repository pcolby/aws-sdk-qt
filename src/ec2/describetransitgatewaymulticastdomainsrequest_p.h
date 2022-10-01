// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSITGATEWAYMULTICASTDOMAINSREQUEST_P_H
#define QTAWS_DESCRIBETRANSITGATEWAYMULTICASTDOMAINSREQUEST_P_H

#include "ec2request_p.h"
#include "describetransitgatewaymulticastdomainsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeTransitGatewayMulticastDomainsRequest;

class DescribeTransitGatewayMulticastDomainsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeTransitGatewayMulticastDomainsRequestPrivate(const Ec2Request::Action action,
                                   DescribeTransitGatewayMulticastDomainsRequest * const q);
    DescribeTransitGatewayMulticastDomainsRequestPrivate(const DescribeTransitGatewayMulticastDomainsRequestPrivate &other,
                                   DescribeTransitGatewayMulticastDomainsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTransitGatewayMulticastDomainsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
