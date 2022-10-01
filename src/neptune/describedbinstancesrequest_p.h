// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBINSTANCESREQUEST_P_H
#define QTAWS_DESCRIBEDBINSTANCESREQUEST_P_H

#include "neptunerequest_p.h"
#include "describedbinstancesrequest.h"

namespace QtAws {
namespace Neptune {

class DescribeDBInstancesRequest;

class DescribeDBInstancesRequestPrivate : public NeptuneRequestPrivate {

public:
    DescribeDBInstancesRequestPrivate(const NeptuneRequest::Action action,
                                   DescribeDBInstancesRequest * const q);
    DescribeDBInstancesRequestPrivate(const DescribeDBInstancesRequestPrivate &other,
                                   DescribeDBInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDBInstancesRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
