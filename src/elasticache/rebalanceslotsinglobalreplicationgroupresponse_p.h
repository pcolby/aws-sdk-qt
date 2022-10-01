// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBALANCESLOTSINGLOBALREPLICATIONGROUPRESPONSE_P_H
#define QTAWS_REBALANCESLOTSINGLOBALREPLICATIONGROUPRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class RebalanceSlotsInGlobalReplicationGroupResponse;

class RebalanceSlotsInGlobalReplicationGroupResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit RebalanceSlotsInGlobalReplicationGroupResponsePrivate(RebalanceSlotsInGlobalReplicationGroupResponse * const q);

    void parseRebalanceSlotsInGlobalReplicationGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RebalanceSlotsInGlobalReplicationGroupResponse)
    Q_DISABLE_COPY(RebalanceSlotsInGlobalReplicationGroupResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
