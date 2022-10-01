// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DECREASENODEGROUPSINGLOBALREPLICATIONGROUPRESPONSE_H
#define QTAWS_DECREASENODEGROUPSINGLOBALREPLICATIONGROUPRESPONSE_H

#include "elasticacheresponse.h"
#include "decreasenodegroupsinglobalreplicationgrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class DecreaseNodeGroupsInGlobalReplicationGroupResponsePrivate;

class QTAWSELASTICACHE_EXPORT DecreaseNodeGroupsInGlobalReplicationGroupResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    DecreaseNodeGroupsInGlobalReplicationGroupResponse(const DecreaseNodeGroupsInGlobalReplicationGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DecreaseNodeGroupsInGlobalReplicationGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DecreaseNodeGroupsInGlobalReplicationGroupResponse)
    Q_DISABLE_COPY(DecreaseNodeGroupsInGlobalReplicationGroupResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
