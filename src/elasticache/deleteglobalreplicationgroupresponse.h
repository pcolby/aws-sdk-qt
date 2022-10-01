// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGLOBALREPLICATIONGROUPRESPONSE_H
#define QTAWS_DELETEGLOBALREPLICATIONGROUPRESPONSE_H

#include "elasticacheresponse.h"
#include "deleteglobalreplicationgrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class DeleteGlobalReplicationGroupResponsePrivate;

class QTAWSELASTICACHE_EXPORT DeleteGlobalReplicationGroupResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    DeleteGlobalReplicationGroupResponse(const DeleteGlobalReplicationGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteGlobalReplicationGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGlobalReplicationGroupResponse)
    Q_DISABLE_COPY(DeleteGlobalReplicationGroupResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
