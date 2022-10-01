// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTHORIZECACHESECURITYGROUPINGRESSREQUEST_H
#define QTAWS_AUTHORIZECACHESECURITYGROUPINGRESSREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class AuthorizeCacheSecurityGroupIngressRequestPrivate;

class QTAWSELASTICACHE_EXPORT AuthorizeCacheSecurityGroupIngressRequest : public ElastiCacheRequest {

public:
    AuthorizeCacheSecurityGroupIngressRequest(const AuthorizeCacheSecurityGroupIngressRequest &other);
    AuthorizeCacheSecurityGroupIngressRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AuthorizeCacheSecurityGroupIngressRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
