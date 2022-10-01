// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INCREASENODEGROUPSINGLOBALREPLICATIONGROUPRESPONSE_H
#define QTAWS_INCREASENODEGROUPSINGLOBALREPLICATIONGROUPRESPONSE_H

#include "elasticacheresponse.h"
#include "increasenodegroupsinglobalreplicationgrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class IncreaseNodeGroupsInGlobalReplicationGroupResponsePrivate;

class QTAWSELASTICACHE_EXPORT IncreaseNodeGroupsInGlobalReplicationGroupResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    IncreaseNodeGroupsInGlobalReplicationGroupResponse(const IncreaseNodeGroupsInGlobalReplicationGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const IncreaseNodeGroupsInGlobalReplicationGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IncreaseNodeGroupsInGlobalReplicationGroupResponse)
    Q_DISABLE_COPY(IncreaseNodeGroupsInGlobalReplicationGroupResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
