// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYGLOBALREPLICATIONGROUPRESPONSE_H
#define QTAWS_MODIFYGLOBALREPLICATIONGROUPRESPONSE_H

#include "elasticacheresponse.h"
#include "modifyglobalreplicationgrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class ModifyGlobalReplicationGroupResponsePrivate;

class QTAWSELASTICACHE_EXPORT ModifyGlobalReplicationGroupResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    ModifyGlobalReplicationGroupResponse(const ModifyGlobalReplicationGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyGlobalReplicationGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyGlobalReplicationGroupResponse)
    Q_DISABLE_COPY(ModifyGlobalReplicationGroupResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
