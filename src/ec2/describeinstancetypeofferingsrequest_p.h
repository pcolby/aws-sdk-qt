// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCETYPEOFFERINGSREQUEST_P_H
#define QTAWS_DESCRIBEINSTANCETYPEOFFERINGSREQUEST_P_H

#include "ec2request_p.h"
#include "describeinstancetypeofferingsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeInstanceTypeOfferingsRequest;

class DescribeInstanceTypeOfferingsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeInstanceTypeOfferingsRequestPrivate(const Ec2Request::Action action,
                                   DescribeInstanceTypeOfferingsRequest * const q);
    DescribeInstanceTypeOfferingsRequestPrivate(const DescribeInstanceTypeOfferingsRequestPrivate &other,
                                   DescribeInstanceTypeOfferingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInstanceTypeOfferingsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
