// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDINSTANCESLISTINGSREQUEST_P_H
#define QTAWS_DESCRIBERESERVEDINSTANCESLISTINGSREQUEST_P_H

#include "ec2request_p.h"
#include "describereservedinstanceslistingsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeReservedInstancesListingsRequest;

class DescribeReservedInstancesListingsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeReservedInstancesListingsRequestPrivate(const Ec2Request::Action action,
                                   DescribeReservedInstancesListingsRequest * const q);
    DescribeReservedInstancesListingsRequestPrivate(const DescribeReservedInstancesListingsRequestPrivate &other,
                                   DescribeReservedInstancesListingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReservedInstancesListingsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
