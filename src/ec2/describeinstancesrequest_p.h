// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCESREQUEST_P_H
#define QTAWS_DESCRIBEINSTANCESREQUEST_P_H

#include "ec2request_p.h"
#include "describeinstancesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeInstancesRequest;

class DescribeInstancesRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeInstancesRequestPrivate(const Ec2Request::Action action,
                                   DescribeInstancesRequest * const q);
    DescribeInstancesRequestPrivate(const DescribeInstancesRequestPrivate &other,
                                   DescribeInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInstancesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
