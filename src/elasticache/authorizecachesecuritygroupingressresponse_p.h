// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTHORIZECACHESECURITYGROUPINGRESSRESPONSE_P_H
#define QTAWS_AUTHORIZECACHESECURITYGROUPINGRESSRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class AuthorizeCacheSecurityGroupIngressResponse;

class AuthorizeCacheSecurityGroupIngressResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit AuthorizeCacheSecurityGroupIngressResponsePrivate(AuthorizeCacheSecurityGroupIngressResponse * const q);

    void parseAuthorizeCacheSecurityGroupIngressResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AuthorizeCacheSecurityGroupIngressResponse)
    Q_DISABLE_COPY(AuthorizeCacheSecurityGroupIngressResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
