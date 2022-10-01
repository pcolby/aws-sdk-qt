// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCENDPOINTSERVICECONFIGURATIONSREQUEST_P_H
#define QTAWS_DESCRIBEVPCENDPOINTSERVICECONFIGURATIONSREQUEST_P_H

#include "ec2request_p.h"
#include "describevpcendpointserviceconfigurationsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcEndpointServiceConfigurationsRequest;

class DescribeVpcEndpointServiceConfigurationsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeVpcEndpointServiceConfigurationsRequestPrivate(const Ec2Request::Action action,
                                   DescribeVpcEndpointServiceConfigurationsRequest * const q);
    DescribeVpcEndpointServiceConfigurationsRequestPrivate(const DescribeVpcEndpointServiceConfigurationsRequestPrivate &other,
                                   DescribeVpcEndpointServiceConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeVpcEndpointServiceConfigurationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
