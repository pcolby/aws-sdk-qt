// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGLOBALREPLICATIONGROUPREQUEST_P_H
#define QTAWS_DELETEGLOBALREPLICATIONGROUPREQUEST_P_H

#include "elasticacherequest_p.h"
#include "deleteglobalreplicationgrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class DeleteGlobalReplicationGroupRequest;

class DeleteGlobalReplicationGroupRequestPrivate : public ElastiCacheRequestPrivate {

public:
    DeleteGlobalReplicationGroupRequestPrivate(const ElastiCacheRequest::Action action,
                                   DeleteGlobalReplicationGroupRequest * const q);
    DeleteGlobalReplicationGroupRequestPrivate(const DeleteGlobalReplicationGroupRequestPrivate &other,
                                   DeleteGlobalReplicationGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteGlobalReplicationGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
