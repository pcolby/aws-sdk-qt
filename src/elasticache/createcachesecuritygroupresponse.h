// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECACHESECURITYGROUPRESPONSE_H
#define QTAWS_CREATECACHESECURITYGROUPRESPONSE_H

#include "elasticacheresponse.h"
#include "createcachesecuritygrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class CreateCacheSecurityGroupResponsePrivate;

class QTAWSELASTICACHE_EXPORT CreateCacheSecurityGroupResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    CreateCacheSecurityGroupResponse(const CreateCacheSecurityGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCacheSecurityGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCacheSecurityGroupResponse)
    Q_DISABLE_COPY(CreateCacheSecurityGroupResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
