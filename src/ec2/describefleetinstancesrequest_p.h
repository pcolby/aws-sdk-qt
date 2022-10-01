// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETINSTANCESREQUEST_P_H
#define QTAWS_DESCRIBEFLEETINSTANCESREQUEST_P_H

#include "ec2request_p.h"
#include "describefleetinstancesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeFleetInstancesRequest;

class DescribeFleetInstancesRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeFleetInstancesRequestPrivate(const Ec2Request::Action action,
                                   DescribeFleetInstancesRequest * const q);
    DescribeFleetInstancesRequestPrivate(const DescribeFleetInstancesRequestPrivate &other,
                                   DescribeFleetInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFleetInstancesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
