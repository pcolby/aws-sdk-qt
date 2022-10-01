// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INCREASENODEGROUPSINGLOBALREPLICATIONGROUPREQUEST_P_H
#define QTAWS_INCREASENODEGROUPSINGLOBALREPLICATIONGROUPREQUEST_P_H

#include "elasticacherequest_p.h"
#include "increasenodegroupsinglobalreplicationgrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class IncreaseNodeGroupsInGlobalReplicationGroupRequest;

class IncreaseNodeGroupsInGlobalReplicationGroupRequestPrivate : public ElastiCacheRequestPrivate {

public:
    IncreaseNodeGroupsInGlobalReplicationGroupRequestPrivate(const ElastiCacheRequest::Action action,
                                   IncreaseNodeGroupsInGlobalReplicationGroupRequest * const q);
    IncreaseNodeGroupsInGlobalReplicationGroupRequestPrivate(const IncreaseNodeGroupsInGlobalReplicationGroupRequestPrivate &other,
                                   IncreaseNodeGroupsInGlobalReplicationGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(IncreaseNodeGroupsInGlobalReplicationGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
