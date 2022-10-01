// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIREWALLRULEGROUPSREQUEST_P_H
#define QTAWS_LISTFIREWALLRULEGROUPSREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "listfirewallrulegroupsrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListFirewallRuleGroupsRequest;

class ListFirewallRuleGroupsRequestPrivate : public Route53ResolverRequestPrivate {

public:
    ListFirewallRuleGroupsRequestPrivate(const Route53ResolverRequest::Action action,
                                   ListFirewallRuleGroupsRequest * const q);
    ListFirewallRuleGroupsRequestPrivate(const ListFirewallRuleGroupsRequestPrivate &other,
                                   ListFirewallRuleGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFirewallRuleGroupsRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
