// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDINSTANCESOFFERINGSREQUEST_P_H
#define QTAWS_DESCRIBERESERVEDINSTANCESOFFERINGSREQUEST_P_H

#include "ec2request_p.h"
#include "describereservedinstancesofferingsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeReservedInstancesOfferingsRequest;

class DescribeReservedInstancesOfferingsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeReservedInstancesOfferingsRequestPrivate(const Ec2Request::Action action,
                                   DescribeReservedInstancesOfferingsRequest * const q);
    DescribeReservedInstancesOfferingsRequestPrivate(const DescribeReservedInstancesOfferingsRequestPrivate &other,
                                   DescribeReservedInstancesOfferingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReservedInstancesOfferingsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
