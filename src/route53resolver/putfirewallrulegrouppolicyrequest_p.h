// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTFIREWALLRULEGROUPPOLICYREQUEST_P_H
#define QTAWS_PUTFIREWALLRULEGROUPPOLICYREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "putfirewallrulegrouppolicyrequest.h"

namespace QtAws {
namespace Route53Resolver {

class PutFirewallRuleGroupPolicyRequest;

class PutFirewallRuleGroupPolicyRequestPrivate : public Route53ResolverRequestPrivate {

public:
    PutFirewallRuleGroupPolicyRequestPrivate(const Route53ResolverRequest::Action action,
                                   PutFirewallRuleGroupPolicyRequest * const q);
    PutFirewallRuleGroupPolicyRequestPrivate(const PutFirewallRuleGroupPolicyRequestPrivate &other,
                                   PutFirewallRuleGroupPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutFirewallRuleGroupPolicyRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
