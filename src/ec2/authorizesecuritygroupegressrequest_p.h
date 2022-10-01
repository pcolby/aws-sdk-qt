// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTHORIZESECURITYGROUPEGRESSREQUEST_P_H
#define QTAWS_AUTHORIZESECURITYGROUPEGRESSREQUEST_P_H

#include "ec2request_p.h"
#include "authorizesecuritygroupegressrequest.h"

namespace QtAws {
namespace Ec2 {

class AuthorizeSecurityGroupEgressRequest;

class AuthorizeSecurityGroupEgressRequestPrivate : public Ec2RequestPrivate {

public:
    AuthorizeSecurityGroupEgressRequestPrivate(const Ec2Request::Action action,
                                   AuthorizeSecurityGroupEgressRequest * const q);
    AuthorizeSecurityGroupEgressRequestPrivate(const AuthorizeSecurityGroupEgressRequestPrivate &other,
                                   AuthorizeSecurityGroupEgressRequest * const q);

private:
    Q_DECLARE_PUBLIC(AuthorizeSecurityGroupEgressRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
