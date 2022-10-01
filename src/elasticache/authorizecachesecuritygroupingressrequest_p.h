// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTHORIZECACHESECURITYGROUPINGRESSREQUEST_P_H
#define QTAWS_AUTHORIZECACHESECURITYGROUPINGRESSREQUEST_P_H

#include "elasticacherequest_p.h"
#include "authorizecachesecuritygroupingressrequest.h"

namespace QtAws {
namespace ElastiCache {

class AuthorizeCacheSecurityGroupIngressRequest;

class AuthorizeCacheSecurityGroupIngressRequestPrivate : public ElastiCacheRequestPrivate {

public:
    AuthorizeCacheSecurityGroupIngressRequestPrivate(const ElastiCacheRequest::Action action,
                                   AuthorizeCacheSecurityGroupIngressRequest * const q);
    AuthorizeCacheSecurityGroupIngressRequestPrivate(const AuthorizeCacheSecurityGroupIngressRequestPrivate &other,
                                   AuthorizeCacheSecurityGroupIngressRequest * const q);

private:
    Q_DECLARE_PUBLIC(AuthorizeCacheSecurityGroupIngressRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
