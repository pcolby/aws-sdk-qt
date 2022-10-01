// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCENDPOINTCONNECTIONSREQUEST_P_H
#define QTAWS_DESCRIBEVPCENDPOINTCONNECTIONSREQUEST_P_H

#include "ec2request_p.h"
#include "describevpcendpointconnectionsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcEndpointConnectionsRequest;

class DescribeVpcEndpointConnectionsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeVpcEndpointConnectionsRequestPrivate(const Ec2Request::Action action,
                                   DescribeVpcEndpointConnectionsRequest * const q);
    DescribeVpcEndpointConnectionsRequestPrivate(const DescribeVpcEndpointConnectionsRequestPrivate &other,
                                   DescribeVpcEndpointConnectionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeVpcEndpointConnectionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
