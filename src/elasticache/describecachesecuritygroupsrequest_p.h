// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECACHESECURITYGROUPSREQUEST_P_H
#define QTAWS_DESCRIBECACHESECURITYGROUPSREQUEST_P_H

#include "elasticacherequest_p.h"
#include "describecachesecuritygroupsrequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeCacheSecurityGroupsRequest;

class DescribeCacheSecurityGroupsRequestPrivate : public ElastiCacheRequestPrivate {

public:
    DescribeCacheSecurityGroupsRequestPrivate(const ElastiCacheRequest::Action action,
                                   DescribeCacheSecurityGroupsRequest * const q);
    DescribeCacheSecurityGroupsRequestPrivate(const DescribeCacheSecurityGroupsRequestPrivate &other,
                                   DescribeCacheSecurityGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCacheSecurityGroupsRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
