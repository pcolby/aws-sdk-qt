// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESUBNETGROUPSREQUEST_P_H
#define QTAWS_DESCRIBESUBNETGROUPSREQUEST_P_H

#include "daxrequest_p.h"
#include "describesubnetgroupsrequest.h"

namespace QtAws {
namespace Dax {

class DescribeSubnetGroupsRequest;

class DescribeSubnetGroupsRequestPrivate : public DaxRequestPrivate {

public:
    DescribeSubnetGroupsRequestPrivate(const DaxRequest::Action action,
                                   DescribeSubnetGroupsRequest * const q);
    DescribeSubnetGroupsRequestPrivate(const DescribeSubnetGroupsRequestPrivate &other,
                                   DescribeSubnetGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSubnetGroupsRequest)

};

} // namespace Dax
} // namespace QtAws

#endif
