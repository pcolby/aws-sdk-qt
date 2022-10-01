// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DECREASENODEGROUPSINGLOBALREPLICATIONGROUPREQUEST_P_H
#define QTAWS_DECREASENODEGROUPSINGLOBALREPLICATIONGROUPREQUEST_P_H

#include "elasticacherequest_p.h"
#include "decreasenodegroupsinglobalreplicationgrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class DecreaseNodeGroupsInGlobalReplicationGroupRequest;

class DecreaseNodeGroupsInGlobalReplicationGroupRequestPrivate : public ElastiCacheRequestPrivate {

public:
    DecreaseNodeGroupsInGlobalReplicationGroupRequestPrivate(const ElastiCacheRequest::Action action,
                                   DecreaseNodeGroupsInGlobalReplicationGroupRequest * const q);
    DecreaseNodeGroupsInGlobalReplicationGroupRequestPrivate(const DecreaseNodeGroupsInGlobalReplicationGroupRequestPrivate &other,
                                   DecreaseNodeGroupsInGlobalReplicationGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DecreaseNodeGroupsInGlobalReplicationGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
