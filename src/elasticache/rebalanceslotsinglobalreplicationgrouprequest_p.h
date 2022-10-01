// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBALANCESLOTSINGLOBALREPLICATIONGROUPREQUEST_P_H
#define QTAWS_REBALANCESLOTSINGLOBALREPLICATIONGROUPREQUEST_P_H

#include "elasticacherequest_p.h"
#include "rebalanceslotsinglobalreplicationgrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class RebalanceSlotsInGlobalReplicationGroupRequest;

class RebalanceSlotsInGlobalReplicationGroupRequestPrivate : public ElastiCacheRequestPrivate {

public:
    RebalanceSlotsInGlobalReplicationGroupRequestPrivate(const ElastiCacheRequest::Action action,
                                   RebalanceSlotsInGlobalReplicationGroupRequest * const q);
    RebalanceSlotsInGlobalReplicationGroupRequestPrivate(const RebalanceSlotsInGlobalReplicationGroupRequestPrivate &other,
                                   RebalanceSlotsInGlobalReplicationGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(RebalanceSlotsInGlobalReplicationGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
