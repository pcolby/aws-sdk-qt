// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEFIREWALLRULEGROUPRESPONSE_P_H
#define QTAWS_ASSOCIATEFIREWALLRULEGROUPRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class AssociateFirewallRuleGroupResponse;

class AssociateFirewallRuleGroupResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit AssociateFirewallRuleGroupResponsePrivate(AssociateFirewallRuleGroupResponse * const q);

    void parseAssociateFirewallRuleGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateFirewallRuleGroupResponse)
    Q_DISABLE_COPY(AssociateFirewallRuleGroupResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
