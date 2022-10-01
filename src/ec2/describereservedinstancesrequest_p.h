// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDINSTANCESREQUEST_P_H
#define QTAWS_DESCRIBERESERVEDINSTANCESREQUEST_P_H

#include "ec2request_p.h"
#include "describereservedinstancesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeReservedInstancesRequest;

class DescribeReservedInstancesRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeReservedInstancesRequestPrivate(const Ec2Request::Action action,
                                   DescribeReservedInstancesRequest * const q);
    DescribeReservedInstancesRequestPrivate(const DescribeReservedInstancesRequestPrivate &other,
                                   DescribeReservedInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReservedInstancesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
