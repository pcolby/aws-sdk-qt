// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIREWALLRULEGROUPASSOCIATIONSREQUEST_P_H
#define QTAWS_LISTFIREWALLRULEGROUPASSOCIATIONSREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "listfirewallrulegroupassociationsrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListFirewallRuleGroupAssociationsRequest;

class ListFirewallRuleGroupAssociationsRequestPrivate : public Route53ResolverRequestPrivate {

public:
    ListFirewallRuleGroupAssociationsRequestPrivate(const Route53ResolverRequest::Action action,
                                   ListFirewallRuleGroupAssociationsRequest * const q);
    ListFirewallRuleGroupAssociationsRequestPrivate(const ListFirewallRuleGroupAssociationsRequestPrivate &other,
                                   ListFirewallRuleGroupAssociationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFirewallRuleGroupAssociationsRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
