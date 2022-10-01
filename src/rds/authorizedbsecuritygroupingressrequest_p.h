// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTHORIZEDBSECURITYGROUPINGRESSREQUEST_P_H
#define QTAWS_AUTHORIZEDBSECURITYGROUPINGRESSREQUEST_P_H

#include "rdsrequest_p.h"
#include "authorizedbsecuritygroupingressrequest.h"

namespace QtAws {
namespace Rds {

class AuthorizeDBSecurityGroupIngressRequest;

class AuthorizeDBSecurityGroupIngressRequestPrivate : public RdsRequestPrivate {

public:
    AuthorizeDBSecurityGroupIngressRequestPrivate(const RdsRequest::Action action,
                                   AuthorizeDBSecurityGroupIngressRequest * const q);
    AuthorizeDBSecurityGroupIngressRequestPrivate(const AuthorizeDBSecurityGroupIngressRequestPrivate &other,
                                   AuthorizeDBSecurityGroupIngressRequest * const q);

private:
    Q_DECLARE_PUBLIC(AuthorizeDBSecurityGroupIngressRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
