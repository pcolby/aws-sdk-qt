// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGLOBALREPLICATIONGROUPSREQUEST_P_H
#define QTAWS_DESCRIBEGLOBALREPLICATIONGROUPSREQUEST_P_H

#include "elasticacherequest_p.h"
#include "describeglobalreplicationgroupsrequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeGlobalReplicationGroupsRequest;

class DescribeGlobalReplicationGroupsRequestPrivate : public ElastiCacheRequestPrivate {

public:
    DescribeGlobalReplicationGroupsRequestPrivate(const ElastiCacheRequest::Action action,
                                   DescribeGlobalReplicationGroupsRequest * const q);
    DescribeGlobalReplicationGroupsRequestPrivate(const DescribeGlobalReplicationGroupsRequestPrivate &other,
                                   DescribeGlobalReplicationGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeGlobalReplicationGroupsRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
