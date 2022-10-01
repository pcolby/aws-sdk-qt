// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBSUBNETGROUPSREQUEST_P_H
#define QTAWS_DESCRIBEDBSUBNETGROUPSREQUEST_P_H

#include "docdbrequest_p.h"
#include "describedbsubnetgroupsrequest.h"

namespace QtAws {
namespace DocDb {

class DescribeDBSubnetGroupsRequest;

class DescribeDBSubnetGroupsRequestPrivate : public DocDbRequestPrivate {

public:
    DescribeDBSubnetGroupsRequestPrivate(const DocDbRequest::Action action,
                                   DescribeDBSubnetGroupsRequest * const q);
    DescribeDBSubnetGroupsRequestPrivate(const DescribeDBSubnetGroupsRequestPrivate &other,
                                   DescribeDBSubnetGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDBSubnetGroupsRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
