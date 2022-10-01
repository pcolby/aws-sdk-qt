// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFIREWALLRULEGROUPREQUEST_P_H
#define QTAWS_GETFIREWALLRULEGROUPREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "getfirewallrulegrouprequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetFirewallRuleGroupRequest;

class GetFirewallRuleGroupRequestPrivate : public Route53ResolverRequestPrivate {

public:
    GetFirewallRuleGroupRequestPrivate(const Route53ResolverRequest::Action action,
                                   GetFirewallRuleGroupRequest * const q);
    GetFirewallRuleGroupRequestPrivate(const GetFirewallRuleGroupRequestPrivate &other,
                                   GetFirewallRuleGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFirewallRuleGroupRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
