// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONGROUPREQUEST_P_H
#define QTAWS_DELETEREPLICATIONGROUPREQUEST_P_H

#include "elasticacherequest_p.h"
#include "deletereplicationgrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class DeleteReplicationGroupRequest;

class DeleteReplicationGroupRequestPrivate : public ElastiCacheRequestPrivate {

public:
    DeleteReplicationGroupRequestPrivate(const ElastiCacheRequest::Action action,
                                   DeleteReplicationGroupRequest * const q);
    DeleteReplicationGroupRequestPrivate(const DeleteReplicationGroupRequestPrivate &other,
                                   DeleteReplicationGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteReplicationGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
