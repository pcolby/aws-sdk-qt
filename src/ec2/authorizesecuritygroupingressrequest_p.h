// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTHORIZESECURITYGROUPINGRESSREQUEST_P_H
#define QTAWS_AUTHORIZESECURITYGROUPINGRESSREQUEST_P_H

#include "ec2request_p.h"
#include "authorizesecuritygroupingressrequest.h"

namespace QtAws {
namespace Ec2 {

class AuthorizeSecurityGroupIngressRequest;

class AuthorizeSecurityGroupIngressRequestPrivate : public Ec2RequestPrivate {

public:
    AuthorizeSecurityGroupIngressRequestPrivate(const Ec2Request::Action action,
                                   AuthorizeSecurityGroupIngressRequest * const q);
    AuthorizeSecurityGroupIngressRequestPrivate(const AuthorizeSecurityGroupIngressRequestPrivate &other,
                                   AuthorizeSecurityGroupIngressRequest * const q);

private:
    Q_DECLARE_PUBLIC(AuthorizeSecurityGroupIngressRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
