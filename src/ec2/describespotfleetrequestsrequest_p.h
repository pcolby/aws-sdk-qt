// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESPOTFLEETREQUESTSREQUEST_P_H
#define QTAWS_DESCRIBESPOTFLEETREQUESTSREQUEST_P_H

#include "ec2request_p.h"
#include "describespotfleetrequestsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeSpotFleetRequestsRequest;

class DescribeSpotFleetRequestsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeSpotFleetRequestsRequestPrivate(const Ec2Request::Action action,
                                   DescribeSpotFleetRequestsRequest * const q);
    DescribeSpotFleetRequestsRequestPrivate(const DescribeSpotFleetRequestsRequestPrivate &other,
                                   DescribeSpotFleetRequestsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSpotFleetRequestsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
