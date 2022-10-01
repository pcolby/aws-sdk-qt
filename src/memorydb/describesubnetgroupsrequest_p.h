// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESUBNETGROUPSREQUEST_P_H
#define QTAWS_DESCRIBESUBNETGROUPSREQUEST_P_H

#include "memorydbrequest_p.h"
#include "describesubnetgroupsrequest.h"

namespace QtAws {
namespace MemoryDb {

class DescribeSubnetGroupsRequest;

class DescribeSubnetGroupsRequestPrivate : public MemoryDbRequestPrivate {

public:
    DescribeSubnetGroupsRequestPrivate(const MemoryDbRequest::Action action,
                                   DescribeSubnetGroupsRequest * const q);
    DescribeSubnetGroupsRequestPrivate(const DescribeSubnetGroupsRequestPrivate &other,
                                   DescribeSubnetGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSubnetGroupsRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
