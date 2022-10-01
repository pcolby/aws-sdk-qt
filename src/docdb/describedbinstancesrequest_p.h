// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBINSTANCESREQUEST_P_H
#define QTAWS_DESCRIBEDBINSTANCESREQUEST_P_H

#include "docdbrequest_p.h"
#include "describedbinstancesrequest.h"

namespace QtAws {
namespace DocDb {

class DescribeDBInstancesRequest;

class DescribeDBInstancesRequestPrivate : public DocDbRequestPrivate {

public:
    DescribeDBInstancesRequestPrivate(const DocDbRequest::Action action,
                                   DescribeDBInstancesRequest * const q);
    DescribeDBInstancesRequestPrivate(const DescribeDBInstancesRequestPrivate &other,
                                   DescribeDBInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDBInstancesRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
