// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERSUBNETGROUPSREQUEST_P_H
#define QTAWS_DESCRIBECLUSTERSUBNETGROUPSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "describeclustersubnetgroupsrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeClusterSubnetGroupsRequest;

class DescribeClusterSubnetGroupsRequestPrivate : public RedshiftRequestPrivate {

public:
    DescribeClusterSubnetGroupsRequestPrivate(const RedshiftRequest::Action action,
                                   DescribeClusterSubnetGroupsRequest * const q);
    DescribeClusterSubnetGroupsRequestPrivate(const DescribeClusterSubnetGroupsRequestPrivate &other,
                                   DescribeClusterSubnetGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeClusterSubnetGroupsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
