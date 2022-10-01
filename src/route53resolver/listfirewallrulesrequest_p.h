// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIREWALLRULESREQUEST_P_H
#define QTAWS_LISTFIREWALLRULESREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "listfirewallrulesrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListFirewallRulesRequest;

class ListFirewallRulesRequestPrivate : public Route53ResolverRequestPrivate {

public:
    ListFirewallRulesRequestPrivate(const Route53ResolverRequest::Action action,
                                   ListFirewallRulesRequest * const q);
    ListFirewallRulesRequestPrivate(const ListFirewallRulesRequestPrivate &other,
                                   ListFirewallRulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFirewallRulesRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
