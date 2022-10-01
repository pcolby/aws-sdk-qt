// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTHORIZECLUSTERSECURITYGROUPINGRESSREQUEST_P_H
#define QTAWS_AUTHORIZECLUSTERSECURITYGROUPINGRESSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "authorizeclustersecuritygroupingressrequest.h"

namespace QtAws {
namespace Redshift {

class AuthorizeClusterSecurityGroupIngressRequest;

class AuthorizeClusterSecurityGroupIngressRequestPrivate : public RedshiftRequestPrivate {

public:
    AuthorizeClusterSecurityGroupIngressRequestPrivate(const RedshiftRequest::Action action,
                                   AuthorizeClusterSecurityGroupIngressRequest * const q);
    AuthorizeClusterSecurityGroupIngressRequestPrivate(const AuthorizeClusterSecurityGroupIngressRequestPrivate &other,
                                   AuthorizeClusterSecurityGroupIngressRequest * const q);

private:
    Q_DECLARE_PUBLIC(AuthorizeClusterSecurityGroupIngressRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
