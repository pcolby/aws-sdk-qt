// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTCACHECLUSTERREQUEST_P_H
#define QTAWS_REBOOTCACHECLUSTERREQUEST_P_H

#include "elasticacherequest_p.h"
#include "rebootcacheclusterrequest.h"

namespace QtAws {
namespace ElastiCache {

class RebootCacheClusterRequest;

class RebootCacheClusterRequestPrivate : public ElastiCacheRequestPrivate {

public:
    RebootCacheClusterRequestPrivate(const ElastiCacheRequest::Action action,
                                   RebootCacheClusterRequest * const q);
    RebootCacheClusterRequestPrivate(const RebootCacheClusterRequestPrivate &other,
                                   RebootCacheClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(RebootCacheClusterRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
