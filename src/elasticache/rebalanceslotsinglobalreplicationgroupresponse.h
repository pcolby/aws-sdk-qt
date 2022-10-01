// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBALANCESLOTSINGLOBALREPLICATIONGROUPRESPONSE_H
#define QTAWS_REBALANCESLOTSINGLOBALREPLICATIONGROUPRESPONSE_H

#include "elasticacheresponse.h"
#include "rebalanceslotsinglobalreplicationgrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class RebalanceSlotsInGlobalReplicationGroupResponsePrivate;

class QTAWSELASTICACHE_EXPORT RebalanceSlotsInGlobalReplicationGroupResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    RebalanceSlotsInGlobalReplicationGroupResponse(const RebalanceSlotsInGlobalReplicationGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RebalanceSlotsInGlobalReplicationGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RebalanceSlotsInGlobalReplicationGroupResponse)
    Q_DISABLE_COPY(RebalanceSlotsInGlobalReplicationGroupResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
