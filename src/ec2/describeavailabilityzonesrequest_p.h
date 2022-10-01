// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAVAILABILITYZONESREQUEST_P_H
#define QTAWS_DESCRIBEAVAILABILITYZONESREQUEST_P_H

#include "ec2request_p.h"
#include "describeavailabilityzonesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeAvailabilityZonesRequest;

class DescribeAvailabilityZonesRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeAvailabilityZonesRequestPrivate(const Ec2Request::Action action,
                                   DescribeAvailabilityZonesRequest * const q);
    DescribeAvailabilityZonesRequestPrivate(const DescribeAvailabilityZonesRequestPrivate &other,
                                   DescribeAvailabilityZonesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAvailabilityZonesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
