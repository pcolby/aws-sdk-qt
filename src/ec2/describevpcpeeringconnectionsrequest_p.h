// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCPEERINGCONNECTIONSREQUEST_P_H
#define QTAWS_DESCRIBEVPCPEERINGCONNECTIONSREQUEST_P_H

#include "ec2request_p.h"
#include "describevpcpeeringconnectionsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcPeeringConnectionsRequest;

class DescribeVpcPeeringConnectionsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeVpcPeeringConnectionsRequestPrivate(const Ec2Request::Action action,
                                   DescribeVpcPeeringConnectionsRequest * const q);
    DescribeVpcPeeringConnectionsRequestPrivate(const DescribeVpcPeeringConnectionsRequestPrivate &other,
                                   DescribeVpcPeeringConnectionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeVpcPeeringConnectionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
