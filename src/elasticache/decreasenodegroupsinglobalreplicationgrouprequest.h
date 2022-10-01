// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DECREASENODEGROUPSINGLOBALREPLICATIONGROUPREQUEST_H
#define QTAWS_DECREASENODEGROUPSINGLOBALREPLICATIONGROUPREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class DecreaseNodeGroupsInGlobalReplicationGroupRequestPrivate;

class QTAWSELASTICACHE_EXPORT DecreaseNodeGroupsInGlobalReplicationGroupRequest : public ElastiCacheRequest {

public:
    DecreaseNodeGroupsInGlobalReplicationGroupRequest(const DecreaseNodeGroupsInGlobalReplicationGroupRequest &other);
    DecreaseNodeGroupsInGlobalReplicationGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DecreaseNodeGroupsInGlobalReplicationGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
