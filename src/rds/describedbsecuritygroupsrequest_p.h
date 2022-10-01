// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBSECURITYGROUPSREQUEST_P_H
#define QTAWS_DESCRIBEDBSECURITYGROUPSREQUEST_P_H

#include "rdsrequest_p.h"
#include "describedbsecuritygroupsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBSecurityGroupsRequest;

class DescribeDBSecurityGroupsRequestPrivate : public RdsRequestPrivate {

public:
    DescribeDBSecurityGroupsRequestPrivate(const RdsRequest::Action action,
                                   DescribeDBSecurityGroupsRequest * const q);
    DescribeDBSecurityGroupsRequestPrivate(const DescribeDBSecurityGroupsRequestPrivate &other,
                                   DescribeDBSecurityGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDBSecurityGroupsRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
