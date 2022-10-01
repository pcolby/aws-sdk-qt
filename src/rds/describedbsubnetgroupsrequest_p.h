// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBSUBNETGROUPSREQUEST_P_H
#define QTAWS_DESCRIBEDBSUBNETGROUPSREQUEST_P_H

#include "rdsrequest_p.h"
#include "describedbsubnetgroupsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBSubnetGroupsRequest;

class DescribeDBSubnetGroupsRequestPrivate : public RdsRequestPrivate {

public:
    DescribeDBSubnetGroupsRequestPrivate(const RdsRequest::Action action,
                                   DescribeDBSubnetGroupsRequest * const q);
    DescribeDBSubnetGroupsRequestPrivate(const DescribeDBSubnetGroupsRequestPrivate &other,
                                   DescribeDBSubnetGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDBSubnetGroupsRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
