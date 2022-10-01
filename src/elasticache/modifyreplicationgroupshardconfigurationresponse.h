// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYREPLICATIONGROUPSHARDCONFIGURATIONRESPONSE_H
#define QTAWS_MODIFYREPLICATIONGROUPSHARDCONFIGURATIONRESPONSE_H

#include "elasticacheresponse.h"
#include "modifyreplicationgroupshardconfigurationrequest.h"

namespace QtAws {
namespace ElastiCache {

class ModifyReplicationGroupShardConfigurationResponsePrivate;

class QTAWSELASTICACHE_EXPORT ModifyReplicationGroupShardConfigurationResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    ModifyReplicationGroupShardConfigurationResponse(const ModifyReplicationGroupShardConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyReplicationGroupShardConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyReplicationGroupShardConfigurationResponse)
    Q_DISABLE_COPY(ModifyReplicationGroupShardConfigurationResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
