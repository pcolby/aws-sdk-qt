// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDDBINSTANCESREQUEST_P_H
#define QTAWS_DESCRIBERESERVEDDBINSTANCESREQUEST_P_H

#include "rdsrequest_p.h"
#include "describereserveddbinstancesrequest.h"

namespace QtAws {
namespace Rds {

class DescribeReservedDBInstancesRequest;

class DescribeReservedDBInstancesRequestPrivate : public RdsRequestPrivate {

public:
    DescribeReservedDBInstancesRequestPrivate(const RdsRequest::Action action,
                                   DescribeReservedDBInstancesRequest * const q);
    DescribeReservedDBInstancesRequestPrivate(const DescribeReservedDBInstancesRequestPrivate &other,
                                   DescribeReservedDBInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReservedDBInstancesRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
