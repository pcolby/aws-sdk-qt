// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBALANCESLOTSINGLOBALREPLICATIONGROUPREQUEST_H
#define QTAWS_REBALANCESLOTSINGLOBALREPLICATIONGROUPREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class RebalanceSlotsInGlobalReplicationGroupRequestPrivate;

class QTAWSELASTICACHE_EXPORT RebalanceSlotsInGlobalReplicationGroupRequest : public ElastiCacheRequest {

public:
    RebalanceSlotsInGlobalReplicationGroupRequest(const RebalanceSlotsInGlobalReplicationGroupRequest &other);
    RebalanceSlotsInGlobalReplicationGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RebalanceSlotsInGlobalReplicationGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
