// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGLOBALREPLICATIONGROUPRESPONSE_H
#define QTAWS_CREATEGLOBALREPLICATIONGROUPRESPONSE_H

#include "elasticacheresponse.h"
#include "createglobalreplicationgrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class CreateGlobalReplicationGroupResponsePrivate;

class QTAWSELASTICACHE_EXPORT CreateGlobalReplicationGroupResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    CreateGlobalReplicationGroupResponse(const CreateGlobalReplicationGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateGlobalReplicationGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGlobalReplicationGroupResponse)
    Q_DISABLE_COPY(CreateGlobalReplicationGroupResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
