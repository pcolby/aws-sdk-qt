// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERSECURITYGROUPSREQUEST_P_H
#define QTAWS_DESCRIBECLUSTERSECURITYGROUPSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "describeclustersecuritygroupsrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeClusterSecurityGroupsRequest;

class DescribeClusterSecurityGroupsRequestPrivate : public RedshiftRequestPrivate {

public:
    DescribeClusterSecurityGroupsRequestPrivate(const RedshiftRequest::Action action,
                                   DescribeClusterSecurityGroupsRequest * const q);
    DescribeClusterSecurityGroupsRequestPrivate(const DescribeClusterSecurityGroupsRequestPrivate &other,
                                   DescribeClusterSecurityGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeClusterSecurityGroupsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
