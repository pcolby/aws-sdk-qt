// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIREWALLDOMAINLISTSREQUEST_P_H
#define QTAWS_LISTFIREWALLDOMAINLISTSREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "listfirewalldomainlistsrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListFirewallDomainListsRequest;

class ListFirewallDomainListsRequestPrivate : public Route53ResolverRequestPrivate {

public:
    ListFirewallDomainListsRequestPrivate(const Route53ResolverRequest::Action action,
                                   ListFirewallDomainListsRequest * const q);
    ListFirewallDomainListsRequestPrivate(const ListFirewallDomainListsRequestPrivate &other,
                                   ListFirewallDomainListsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFirewallDomainListsRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
