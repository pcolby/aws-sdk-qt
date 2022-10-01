// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBSUBNETGROUPSREQUEST_P_H
#define QTAWS_DESCRIBEDBSUBNETGROUPSREQUEST_P_H

#include "neptunerequest_p.h"
#include "describedbsubnetgroupsrequest.h"

namespace QtAws {
namespace Neptune {

class DescribeDBSubnetGroupsRequest;

class DescribeDBSubnetGroupsRequestPrivate : public NeptuneRequestPrivate {

public:
    DescribeDBSubnetGroupsRequestPrivate(const NeptuneRequest::Action action,
                                   DescribeDBSubnetGroupsRequest * const q);
    DescribeDBSubnetGroupsRequestPrivate(const DescribeDBSubnetGroupsRequestPrivate &other,
                                   DescribeDBSubnetGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDBSubnetGroupsRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
