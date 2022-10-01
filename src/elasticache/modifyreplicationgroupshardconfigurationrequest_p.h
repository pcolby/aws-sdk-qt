// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYREPLICATIONGROUPSHARDCONFIGURATIONREQUEST_P_H
#define QTAWS_MODIFYREPLICATIONGROUPSHARDCONFIGURATIONREQUEST_P_H

#include "elasticacherequest_p.h"
#include "modifyreplicationgroupshardconfigurationrequest.h"

namespace QtAws {
namespace ElastiCache {

class ModifyReplicationGroupShardConfigurationRequest;

class ModifyReplicationGroupShardConfigurationRequestPrivate : public ElastiCacheRequestPrivate {

public:
    ModifyReplicationGroupShardConfigurationRequestPrivate(const ElastiCacheRequest::Action action,
                                   ModifyReplicationGroupShardConfigurationRequest * const q);
    ModifyReplicationGroupShardConfigurationRequestPrivate(const ModifyReplicationGroupShardConfigurationRequestPrivate &other,
                                   ModifyReplicationGroupShardConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyReplicationGroupShardConfigurationRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
