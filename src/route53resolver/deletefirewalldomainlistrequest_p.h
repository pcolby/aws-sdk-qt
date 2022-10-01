// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFIREWALLDOMAINLISTREQUEST_P_H
#define QTAWS_DELETEFIREWALLDOMAINLISTREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "deletefirewalldomainlistrequest.h"

namespace QtAws {
namespace Route53Resolver {

class DeleteFirewallDomainListRequest;

class DeleteFirewallDomainListRequestPrivate : public Route53ResolverRequestPrivate {

public:
    DeleteFirewallDomainListRequestPrivate(const Route53ResolverRequest::Action action,
                                   DeleteFirewallDomainListRequest * const q);
    DeleteFirewallDomainListRequestPrivate(const DeleteFirewallDomainListRequestPrivate &other,
                                   DeleteFirewallDomainListRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFirewallDomainListRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
