// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECACHESUBNETGROUPSREQUEST_P_H
#define QTAWS_DESCRIBECACHESUBNETGROUPSREQUEST_P_H

#include "elasticacherequest_p.h"
#include "describecachesubnetgroupsrequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeCacheSubnetGroupsRequest;

class DescribeCacheSubnetGroupsRequestPrivate : public ElastiCacheRequestPrivate {

public:
    DescribeCacheSubnetGroupsRequestPrivate(const ElastiCacheRequest::Action action,
                                   DescribeCacheSubnetGroupsRequest * const q);
    DescribeCacheSubnetGroupsRequestPrivate(const DescribeCacheSubnetGroupsRequestPrivate &other,
                                   DescribeCacheSubnetGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCacheSubnetGroupsRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
