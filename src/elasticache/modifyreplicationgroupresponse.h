// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYREPLICATIONGROUPRESPONSE_H
#define QTAWS_MODIFYREPLICATIONGROUPRESPONSE_H

#include "elasticacheresponse.h"
#include "modifyreplicationgrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class ModifyReplicationGroupResponsePrivate;

class QTAWSELASTICACHE_EXPORT ModifyReplicationGroupResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    ModifyReplicationGroupResponse(const ModifyReplicationGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyReplicationGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyReplicationGroupResponse)
    Q_DISABLE_COPY(ModifyReplicationGroupResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
