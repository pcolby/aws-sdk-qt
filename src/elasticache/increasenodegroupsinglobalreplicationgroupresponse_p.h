// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INCREASENODEGROUPSINGLOBALREPLICATIONGROUPRESPONSE_P_H
#define QTAWS_INCREASENODEGROUPSINGLOBALREPLICATIONGROUPRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class IncreaseNodeGroupsInGlobalReplicationGroupResponse;

class IncreaseNodeGroupsInGlobalReplicationGroupResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit IncreaseNodeGroupsInGlobalReplicationGroupResponsePrivate(IncreaseNodeGroupsInGlobalReplicationGroupResponse * const q);

    void parseIncreaseNodeGroupsInGlobalReplicationGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(IncreaseNodeGroupsInGlobalReplicationGroupResponse)
    Q_DISABLE_COPY(IncreaseNodeGroupsInGlobalReplicationGroupResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
