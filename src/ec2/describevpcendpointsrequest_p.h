// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCENDPOINTSREQUEST_P_H
#define QTAWS_DESCRIBEVPCENDPOINTSREQUEST_P_H

#include "ec2request_p.h"
#include "describevpcendpointsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcEndpointsRequest;

class DescribeVpcEndpointsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeVpcEndpointsRequestPrivate(const Ec2Request::Action action,
                                   DescribeVpcEndpointsRequest * const q);
    DescribeVpcEndpointsRequestPrivate(const DescribeVpcEndpointsRequestPrivate &other,
                                   DescribeVpcEndpointsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeVpcEndpointsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
