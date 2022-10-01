// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECACHEPARAMETERGROUPSREQUEST_P_H
#define QTAWS_DESCRIBECACHEPARAMETERGROUPSREQUEST_P_H

#include "elasticacherequest_p.h"
#include "describecacheparametergroupsrequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeCacheParameterGroupsRequest;

class DescribeCacheParameterGroupsRequestPrivate : public ElastiCacheRequestPrivate {

public:
    DescribeCacheParameterGroupsRequestPrivate(const ElastiCacheRequest::Action action,
                                   DescribeCacheParameterGroupsRequest * const q);
    DescribeCacheParameterGroupsRequestPrivate(const DescribeCacheParameterGroupsRequestPrivate &other,
                                   DescribeCacheParameterGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCacheParameterGroupsRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
