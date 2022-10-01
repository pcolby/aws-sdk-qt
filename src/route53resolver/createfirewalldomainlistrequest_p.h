// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFIREWALLDOMAINLISTREQUEST_P_H
#define QTAWS_CREATEFIREWALLDOMAINLISTREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "createfirewalldomainlistrequest.h"

namespace QtAws {
namespace Route53Resolver {

class CreateFirewallDomainListRequest;

class CreateFirewallDomainListRequestPrivate : public Route53ResolverRequestPrivate {

public:
    CreateFirewallDomainListRequestPrivate(const Route53ResolverRequest::Action action,
                                   CreateFirewallDomainListRequest * const q);
    CreateFirewallDomainListRequestPrivate(const CreateFirewallDomainListRequestPrivate &other,
                                   CreateFirewallDomainListRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFirewallDomainListRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
