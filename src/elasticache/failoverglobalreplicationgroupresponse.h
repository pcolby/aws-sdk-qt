// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FAILOVERGLOBALREPLICATIONGROUPRESPONSE_H
#define QTAWS_FAILOVERGLOBALREPLICATIONGROUPRESPONSE_H

#include "elasticacheresponse.h"
#include "failoverglobalreplicationgrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class FailoverGlobalReplicationGroupResponsePrivate;

class QTAWSELASTICACHE_EXPORT FailoverGlobalReplicationGroupResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    FailoverGlobalReplicationGroupResponse(const FailoverGlobalReplicationGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const FailoverGlobalReplicationGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(FailoverGlobalReplicationGroupResponse)
    Q_DISABLE_COPY(FailoverGlobalReplicationGroupResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
