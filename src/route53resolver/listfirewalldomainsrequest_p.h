// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIREWALLDOMAINSREQUEST_P_H
#define QTAWS_LISTFIREWALLDOMAINSREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "listfirewalldomainsrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListFirewallDomainsRequest;

class ListFirewallDomainsRequestPrivate : public Route53ResolverRequestPrivate {

public:
    ListFirewallDomainsRequestPrivate(const Route53ResolverRequest::Action action,
                                   ListFirewallDomainsRequest * const q);
    ListFirewallDomainsRequestPrivate(const ListFirewallDomainsRequestPrivate &other,
                                   ListFirewallDomainsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFirewallDomainsRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
