// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONGROUPRESPONSE_H
#define QTAWS_DELETEREPLICATIONGROUPRESPONSE_H

#include "elasticacheresponse.h"
#include "deletereplicationgrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class DeleteReplicationGroupResponsePrivate;

class QTAWSELASTICACHE_EXPORT DeleteReplicationGroupResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    DeleteReplicationGroupResponse(const DeleteReplicationGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteReplicationGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteReplicationGroupResponse)
    Q_DISABLE_COPY(DeleteReplicationGroupResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
