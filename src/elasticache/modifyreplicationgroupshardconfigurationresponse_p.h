// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYREPLICATIONGROUPSHARDCONFIGURATIONRESPONSE_P_H
#define QTAWS_MODIFYREPLICATIONGROUPSHARDCONFIGURATIONRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class ModifyReplicationGroupShardConfigurationResponse;

class ModifyReplicationGroupShardConfigurationResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit ModifyReplicationGroupShardConfigurationResponsePrivate(ModifyReplicationGroupShardConfigurationResponse * const q);

    void parseModifyReplicationGroupShardConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyReplicationGroupShardConfigurationResponse)
    Q_DISABLE_COPY(ModifyReplicationGroupShardConfigurationResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
