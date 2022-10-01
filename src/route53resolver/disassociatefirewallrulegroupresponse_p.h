// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEFIREWALLRULEGROUPRESPONSE_P_H
#define QTAWS_DISASSOCIATEFIREWALLRULEGROUPRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class DisassociateFirewallRuleGroupResponse;

class DisassociateFirewallRuleGroupResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit DisassociateFirewallRuleGroupResponsePrivate(DisassociateFirewallRuleGroupResponse * const q);

    void parseDisassociateFirewallRuleGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateFirewallRuleGroupResponse)
    Q_DISABLE_COPY(DisassociateFirewallRuleGroupResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
