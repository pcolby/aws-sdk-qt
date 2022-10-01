// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBPARAMETERGROUPSREQUEST_P_H
#define QTAWS_DESCRIBEDBPARAMETERGROUPSREQUEST_P_H

#include "rdsrequest_p.h"
#include "describedbparametergroupsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBParameterGroupsRequest;

class DescribeDBParameterGroupsRequestPrivate : public RdsRequestPrivate {

public:
    DescribeDBParameterGroupsRequestPrivate(const RdsRequest::Action action,
                                   DescribeDBParameterGroupsRequest * const q);
    DescribeDBParameterGroupsRequestPrivate(const DescribeDBParameterGroupsRequestPrivate &other,
                                   DescribeDBParameterGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDBParameterGroupsRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
