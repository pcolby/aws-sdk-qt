// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DECREASENODEGROUPSINGLOBALREPLICATIONGROUPRESPONSE_P_H
#define QTAWS_DECREASENODEGROUPSINGLOBALREPLICATIONGROUPRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class DecreaseNodeGroupsInGlobalReplicationGroupResponse;

class DecreaseNodeGroupsInGlobalReplicationGroupResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit DecreaseNodeGroupsInGlobalReplicationGroupResponsePrivate(DecreaseNodeGroupsInGlobalReplicationGroupResponse * const q);

    void parseDecreaseNodeGroupsInGlobalReplicationGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DecreaseNodeGroupsInGlobalReplicationGroupResponse)
    Q_DISABLE_COPY(DecreaseNodeGroupsInGlobalReplicationGroupResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
