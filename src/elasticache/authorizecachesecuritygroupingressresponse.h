// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTHORIZECACHESECURITYGROUPINGRESSRESPONSE_H
#define QTAWS_AUTHORIZECACHESECURITYGROUPINGRESSRESPONSE_H

#include "elasticacheresponse.h"
#include "authorizecachesecuritygroupingressrequest.h"

namespace QtAws {
namespace ElastiCache {

class AuthorizeCacheSecurityGroupIngressResponsePrivate;

class QTAWSELASTICACHE_EXPORT AuthorizeCacheSecurityGroupIngressResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    AuthorizeCacheSecurityGroupIngressResponse(const AuthorizeCacheSecurityGroupIngressRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AuthorizeCacheSecurityGroupIngressRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AuthorizeCacheSecurityGroupIngressResponse)
    Q_DISABLE_COPY(AuthorizeCacheSecurityGroupIngressResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
