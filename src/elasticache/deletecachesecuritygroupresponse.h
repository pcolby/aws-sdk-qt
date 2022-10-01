// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECACHESECURITYGROUPRESPONSE_H
#define QTAWS_DELETECACHESECURITYGROUPRESPONSE_H

#include "elasticacheresponse.h"
#include "deletecachesecuritygrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class DeleteCacheSecurityGroupResponsePrivate;

class QTAWSELASTICACHE_EXPORT DeleteCacheSecurityGroupResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    DeleteCacheSecurityGroupResponse(const DeleteCacheSecurityGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCacheSecurityGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCacheSecurityGroupResponse)
    Q_DISABLE_COPY(DeleteCacheSecurityGroupResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
