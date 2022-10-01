// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCACHECLUSTERREQUEST_P_H
#define QTAWS_MODIFYCACHECLUSTERREQUEST_P_H

#include "elasticacherequest_p.h"
#include "modifycacheclusterrequest.h"

namespace QtAws {
namespace ElastiCache {

class ModifyCacheClusterRequest;

class ModifyCacheClusterRequestPrivate : public ElastiCacheRequestPrivate {

public:
    ModifyCacheClusterRequestPrivate(const ElastiCacheRequest::Action action,
                                   ModifyCacheClusterRequest * const q);
    ModifyCacheClusterRequestPrivate(const ModifyCacheClusterRequestPrivate &other,
                                   ModifyCacheClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyCacheClusterRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
