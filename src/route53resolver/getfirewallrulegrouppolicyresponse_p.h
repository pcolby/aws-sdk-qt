// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFIREWALLRULEGROUPPOLICYRESPONSE_P_H
#define QTAWS_GETFIREWALLRULEGROUPPOLICYRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class GetFirewallRuleGroupPolicyResponse;

class GetFirewallRuleGroupPolicyResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit GetFirewallRuleGroupPolicyResponsePrivate(GetFirewallRuleGroupPolicyResponse * const q);

    void parseGetFirewallRuleGroupPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFirewallRuleGroupPolicyResponse)
    Q_DISABLE_COPY(GetFirewallRuleGroupPolicyResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
