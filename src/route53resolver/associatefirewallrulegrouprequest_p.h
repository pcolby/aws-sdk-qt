// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEFIREWALLRULEGROUPREQUEST_P_H
#define QTAWS_ASSOCIATEFIREWALLRULEGROUPREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "associatefirewallrulegrouprequest.h"

namespace QtAws {
namespace Route53Resolver {

class AssociateFirewallRuleGroupRequest;

class AssociateFirewallRuleGroupRequestPrivate : public Route53ResolverRequestPrivate {

public:
    AssociateFirewallRuleGroupRequestPrivate(const Route53ResolverRequest::Action action,
                                   AssociateFirewallRuleGroupRequest * const q);
    AssociateFirewallRuleGroupRequestPrivate(const AssociateFirewallRuleGroupRequestPrivate &other,
                                   AssociateFirewallRuleGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateFirewallRuleGroupRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
