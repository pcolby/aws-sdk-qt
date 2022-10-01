// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEDULEDINSTANCESREQUEST_P_H
#define QTAWS_DESCRIBESCHEDULEDINSTANCESREQUEST_P_H

#include "ec2request_p.h"
#include "describescheduledinstancesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeScheduledInstancesRequest;

class DescribeScheduledInstancesRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeScheduledInstancesRequestPrivate(const Ec2Request::Action action,
                                   DescribeScheduledInstancesRequest * const q);
    DescribeScheduledInstancesRequestPrivate(const DescribeScheduledInstancesRequestPrivate &other,
                                   DescribeScheduledInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeScheduledInstancesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
