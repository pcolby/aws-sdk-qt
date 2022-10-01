// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDDBINSTANCESOFFERINGSREQUEST_P_H
#define QTAWS_DESCRIBERESERVEDDBINSTANCESOFFERINGSREQUEST_P_H

#include "rdsrequest_p.h"
#include "describereserveddbinstancesofferingsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeReservedDBInstancesOfferingsRequest;

class DescribeReservedDBInstancesOfferingsRequestPrivate : public RdsRequestPrivate {

public:
    DescribeReservedDBInstancesOfferingsRequestPrivate(const RdsRequest::Action action,
                                   DescribeReservedDBInstancesOfferingsRequest * const q);
    DescribeReservedDBInstancesOfferingsRequestPrivate(const DescribeReservedDBInstancesOfferingsRequestPrivate &other,
                                   DescribeReservedDBInstancesOfferingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReservedDBInstancesOfferingsRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
