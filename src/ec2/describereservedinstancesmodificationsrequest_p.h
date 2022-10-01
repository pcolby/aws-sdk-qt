// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDINSTANCESMODIFICATIONSREQUEST_P_H
#define QTAWS_DESCRIBERESERVEDINSTANCESMODIFICATIONSREQUEST_P_H

#include "ec2request_p.h"
#include "describereservedinstancesmodificationsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeReservedInstancesModificationsRequest;

class DescribeReservedInstancesModificationsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeReservedInstancesModificationsRequestPrivate(const Ec2Request::Action action,
                                   DescribeReservedInstancesModificationsRequest * const q);
    DescribeReservedInstancesModificationsRequestPrivate(const DescribeReservedInstancesModificationsRequestPrivate &other,
                                   DescribeReservedInstancesModificationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReservedInstancesModificationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
