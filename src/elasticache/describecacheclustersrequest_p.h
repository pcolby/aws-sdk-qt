// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECACHECLUSTERSREQUEST_P_H
#define QTAWS_DESCRIBECACHECLUSTERSREQUEST_P_H

#include "elasticacherequest_p.h"
#include "describecacheclustersrequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeCacheClustersRequest;

class DescribeCacheClustersRequestPrivate : public ElastiCacheRequestPrivate {

public:
    DescribeCacheClustersRequestPrivate(const ElastiCacheRequest::Action action,
                                   DescribeCacheClustersRequest * const q);
    DescribeCacheClustersRequestPrivate(const DescribeCacheClustersRequestPrivate &other,
                                   DescribeCacheClustersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCacheClustersRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
