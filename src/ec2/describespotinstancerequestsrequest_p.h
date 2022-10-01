// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESPOTINSTANCEREQUESTSREQUEST_P_H
#define QTAWS_DESCRIBESPOTINSTANCEREQUESTSREQUEST_P_H

#include "ec2request_p.h"
#include "describespotinstancerequestsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeSpotInstanceRequestsRequest;

class DescribeSpotInstanceRequestsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeSpotInstanceRequestsRequestPrivate(const Ec2Request::Action action,
                                   DescribeSpotInstanceRequestsRequest * const q);
    DescribeSpotInstanceRequestsRequestPrivate(const DescribeSpotInstanceRequestsRequestPrivate &other,
                                   DescribeSpotInstanceRequestsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSpotInstanceRequestsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
