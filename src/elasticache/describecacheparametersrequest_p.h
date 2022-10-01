// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECACHEPARAMETERSREQUEST_P_H
#define QTAWS_DESCRIBECACHEPARAMETERSREQUEST_P_H

#include "elasticacherequest_p.h"
#include "describecacheparametersrequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeCacheParametersRequest;

class DescribeCacheParametersRequestPrivate : public ElastiCacheRequestPrivate {

public:
    DescribeCacheParametersRequestPrivate(const ElastiCacheRequest::Action action,
                                   DescribeCacheParametersRequest * const q);
    DescribeCacheParametersRequestPrivate(const DescribeCacheParametersRequestPrivate &other,
                                   DescribeCacheParametersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCacheParametersRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
