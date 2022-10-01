// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYREPLICATIONGROUPSHARDCONFIGURATIONREQUEST_H
#define QTAWS_MODIFYREPLICATIONGROUPSHARDCONFIGURATIONREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class ModifyReplicationGroupShardConfigurationRequestPrivate;

class QTAWSELASTICACHE_EXPORT ModifyReplicationGroupShardConfigurationRequest : public ElastiCacheRequest {

public:
    ModifyReplicationGroupShardConfigurationRequest(const ModifyReplicationGroupShardConfigurationRequest &other);
    ModifyReplicationGroupShardConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyReplicationGroupShardConfigurationRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
