// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFIREWALLDOMAINLISTREQUEST_P_H
#define QTAWS_GETFIREWALLDOMAINLISTREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "getfirewalldomainlistrequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetFirewallDomainListRequest;

class GetFirewallDomainListRequestPrivate : public Route53ResolverRequestPrivate {

public:
    GetFirewallDomainListRequestPrivate(const Route53ResolverRequest::Action action,
                                   GetFirewallDomainListRequest * const q);
    GetFirewallDomainListRequestPrivate(const GetFirewallDomainListRequestPrivate &other,
                                   GetFirewallDomainListRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFirewallDomainListRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
