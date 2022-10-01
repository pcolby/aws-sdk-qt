// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECACHECLUSTERREQUEST_P_H
#define QTAWS_CREATECACHECLUSTERREQUEST_P_H

#include "elasticacherequest_p.h"
#include "createcacheclusterrequest.h"

namespace QtAws {
namespace ElastiCache {

class CreateCacheClusterRequest;

class CreateCacheClusterRequestPrivate : public ElastiCacheRequestPrivate {

public:
    CreateCacheClusterRequestPrivate(const ElastiCacheRequest::Action action,
                                   CreateCacheClusterRequest * const q);
    CreateCacheClusterRequestPrivate(const CreateCacheClusterRequestPrivate &other,
                                   CreateCacheClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCacheClusterRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
