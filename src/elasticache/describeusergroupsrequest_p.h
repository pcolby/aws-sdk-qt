// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERGROUPSREQUEST_P_H
#define QTAWS_DESCRIBEUSERGROUPSREQUEST_P_H

#include "elasticacherequest_p.h"
#include "describeusergroupsrequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeUserGroupsRequest;

class DescribeUserGroupsRequestPrivate : public ElastiCacheRequestPrivate {

public:
    DescribeUserGroupsRequestPrivate(const ElastiCacheRequest::Action action,
                                   DescribeUserGroupsRequest * const q);
    DescribeUserGroupsRequestPrivate(const DescribeUserGroupsRequestPrivate &other,
                                   DescribeUserGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeUserGroupsRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
