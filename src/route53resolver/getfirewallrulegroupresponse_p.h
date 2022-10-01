// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFIREWALLRULEGROUPRESPONSE_P_H
#define QTAWS_GETFIREWALLRULEGROUPRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class GetFirewallRuleGroupResponse;

class GetFirewallRuleGroupResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit GetFirewallRuleGroupResponsePrivate(GetFirewallRuleGroupResponse * const q);

    void parseGetFirewallRuleGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFirewallRuleGroupResponse)
    Q_DISABLE_COPY(GetFirewallRuleGroupResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
