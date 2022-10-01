// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECACHECLUSTERREQUEST_P_H
#define QTAWS_DELETECACHECLUSTERREQUEST_P_H

#include "elasticacherequest_p.h"
#include "deletecacheclusterrequest.h"

namespace QtAws {
namespace ElastiCache {

class DeleteCacheClusterRequest;

class DeleteCacheClusterRequestPrivate : public ElastiCacheRequestPrivate {

public:
    DeleteCacheClusterRequestPrivate(const ElastiCacheRequest::Action action,
                                   DeleteCacheClusterRequest * const q);
    DeleteCacheClusterRequestPrivate(const DeleteCacheClusterRequestPrivate &other,
                                   DeleteCacheClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCacheClusterRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
