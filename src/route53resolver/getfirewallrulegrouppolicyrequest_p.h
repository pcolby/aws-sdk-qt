// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFIREWALLRULEGROUPPOLICYREQUEST_P_H
#define QTAWS_GETFIREWALLRULEGROUPPOLICYREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "getfirewallrulegrouppolicyrequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetFirewallRuleGroupPolicyRequest;

class GetFirewallRuleGroupPolicyRequestPrivate : public Route53ResolverRequestPrivate {

public:
    GetFirewallRuleGroupPolicyRequestPrivate(const Route53ResolverRequest::Action action,
                                   GetFirewallRuleGroupPolicyRequest * const q);
    GetFirewallRuleGroupPolicyRequestPrivate(const GetFirewallRuleGroupPolicyRequestPrivate &other,
                                   GetFirewallRuleGroupPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFirewallRuleGroupPolicyRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
