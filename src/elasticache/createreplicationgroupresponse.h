// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPLICATIONGROUPRESPONSE_H
#define QTAWS_CREATEREPLICATIONGROUPRESPONSE_H

#include "elasticacheresponse.h"
#include "createreplicationgrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class CreateReplicationGroupResponsePrivate;

class QTAWSELASTICACHE_EXPORT CreateReplicationGroupResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    CreateReplicationGroupResponse(const CreateReplicationGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateReplicationGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateReplicationGroupResponse)
    Q_DISABLE_COPY(CreateReplicationGroupResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
