// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEDULEDINSTANCEAVAILABILITYREQUEST_P_H
#define QTAWS_DESCRIBESCHEDULEDINSTANCEAVAILABILITYREQUEST_P_H

#include "ec2request_p.h"
#include "describescheduledinstanceavailabilityrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeScheduledInstanceAvailabilityRequest;

class DescribeScheduledInstanceAvailabilityRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeScheduledInstanceAvailabilityRequestPrivate(const Ec2Request::Action action,
                                   DescribeScheduledInstanceAvailabilityRequest * const q);
    DescribeScheduledInstanceAvailabilityRequestPrivate(const DescribeScheduledInstanceAvailabilityRequestPrivate &other,
                                   DescribeScheduledInstanceAvailabilityRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeScheduledInstanceAvailabilityRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
