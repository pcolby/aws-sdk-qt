// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECACHEENGINEVERSIONSREQUEST_P_H
#define QTAWS_DESCRIBECACHEENGINEVERSIONSREQUEST_P_H

#include "elasticacherequest_p.h"
#include "describecacheengineversionsrequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeCacheEngineVersionsRequest;

class DescribeCacheEngineVersionsRequestPrivate : public ElastiCacheRequestPrivate {

public:
    DescribeCacheEngineVersionsRequestPrivate(const ElastiCacheRequest::Action action,
                                   DescribeCacheEngineVersionsRequest * const q);
    DescribeCacheEngineVersionsRequestPrivate(const DescribeCacheEngineVersionsRequestPrivate &other,
                                   DescribeCacheEngineVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCacheEngineVersionsRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
