// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBPROXYTARGETGROUPSREQUEST_P_H
#define QTAWS_DESCRIBEDBPROXYTARGETGROUPSREQUEST_P_H

#include "rdsrequest_p.h"
#include "describedbproxytargetgroupsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBProxyTargetGroupsRequest;

class DescribeDBProxyTargetGroupsRequestPrivate : public RdsRequestPrivate {

public:
    DescribeDBProxyTargetGroupsRequestPrivate(const RdsRequest::Action action,
                                   DescribeDBProxyTargetGroupsRequest * const q);
    DescribeDBProxyTargetGroupsRequestPrivate(const DescribeDBProxyTargetGroupsRequestPrivate &other,
                                   DescribeDBProxyTargetGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDBProxyTargetGroupsRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
