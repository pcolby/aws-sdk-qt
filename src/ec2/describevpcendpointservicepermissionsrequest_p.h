// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCENDPOINTSERVICEPERMISSIONSREQUEST_P_H
#define QTAWS_DESCRIBEVPCENDPOINTSERVICEPERMISSIONSREQUEST_P_H

#include "ec2request_p.h"
#include "describevpcendpointservicepermissionsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcEndpointServicePermissionsRequest;

class DescribeVpcEndpointServicePermissionsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeVpcEndpointServicePermissionsRequestPrivate(const Ec2Request::Action action,
                                   DescribeVpcEndpointServicePermissionsRequest * const q);
    DescribeVpcEndpointServicePermissionsRequestPrivate(const DescribeVpcEndpointServicePermissionsRequestPrivate &other,
                                   DescribeVpcEndpointServicePermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeVpcEndpointServicePermissionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
