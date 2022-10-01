// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCENDPOINTSERVICESREQUEST_P_H
#define QTAWS_DESCRIBEVPCENDPOINTSERVICESREQUEST_P_H

#include "ec2request_p.h"
#include "describevpcendpointservicesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcEndpointServicesRequest;

class DescribeVpcEndpointServicesRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeVpcEndpointServicesRequestPrivate(const Ec2Request::Action action,
                                   DescribeVpcEndpointServicesRequest * const q);
    DescribeVpcEndpointServicesRequestPrivate(const DescribeVpcEndpointServicesRequestPrivate &other,
                                   DescribeVpcEndpointServicesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeVpcEndpointServicesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
