// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTFIREWALLRULEGROUPPOLICYRESPONSE_P_H
#define QTAWS_PUTFIREWALLRULEGROUPPOLICYRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class PutFirewallRuleGroupPolicyResponse;

class PutFirewallRuleGroupPolicyResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit PutFirewallRuleGroupPolicyResponsePrivate(PutFirewallRuleGroupPolicyResponse * const q);

    void parsePutFirewallRuleGroupPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutFirewallRuleGroupPolicyResponse)
    Q_DISABLE_COPY(PutFirewallRuleGroupPolicyResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
