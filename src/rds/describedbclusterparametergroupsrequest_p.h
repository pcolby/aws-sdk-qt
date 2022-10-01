// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERPARAMETERGROUPSREQUEST_P_H
#define QTAWS_DESCRIBEDBCLUSTERPARAMETERGROUPSREQUEST_P_H

#include "rdsrequest_p.h"
#include "describedbclusterparametergroupsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBClusterParameterGroupsRequest;

class DescribeDBClusterParameterGroupsRequestPrivate : public RdsRequestPrivate {

public:
    DescribeDBClusterParameterGroupsRequestPrivate(const RdsRequest::Action action,
                                   DescribeDBClusterParameterGroupsRequest * const q);
    DescribeDBClusterParameterGroupsRequestPrivate(const DescribeDBClusterParameterGroupsRequestPrivate &other,
                                   DescribeDBClusterParameterGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDBClusterParameterGroupsRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
