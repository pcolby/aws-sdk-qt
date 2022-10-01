// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONGROUPSREQUEST_P_H
#define QTAWS_DESCRIBEREPLICATIONGROUPSREQUEST_P_H

#include "elasticacherequest_p.h"
#include "describereplicationgroupsrequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeReplicationGroupsRequest;

class DescribeReplicationGroupsRequestPrivate : public ElastiCacheRequestPrivate {

public:
    DescribeReplicationGroupsRequestPrivate(const ElastiCacheRequest::Action action,
                                   DescribeReplicationGroupsRequest * const q);
    DescribeReplicationGroupsRequestPrivate(const DescribeReplicationGroupsRequestPrivate &other,
                                   DescribeReplicationGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReplicationGroupsRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
