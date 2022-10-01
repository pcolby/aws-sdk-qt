// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTHORIZECLIENTVPNINGRESSREQUEST_P_H
#define QTAWS_AUTHORIZECLIENTVPNINGRESSREQUEST_P_H

#include "ec2request_p.h"
#include "authorizeclientvpningressrequest.h"

namespace QtAws {
namespace Ec2 {

class AuthorizeClientVpnIngressRequest;

class AuthorizeClientVpnIngressRequestPrivate : public Ec2RequestPrivate {

public:
    AuthorizeClientVpnIngressRequestPrivate(const Ec2Request::Action action,
                                   AuthorizeClientVpnIngressRequest * const q);
    AuthorizeClientVpnIngressRequestPrivate(const AuthorizeClientVpnIngressRequestPrivate &other,
                                   AuthorizeClientVpnIngressRequest * const q);

private:
    Q_DECLARE_PUBLIC(AuthorizeClientVpnIngressRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
