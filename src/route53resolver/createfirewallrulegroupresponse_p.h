// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFIREWALLRULEGROUPRESPONSE_P_H
#define QTAWS_CREATEFIREWALLRULEGROUPRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class CreateFirewallRuleGroupResponse;

class CreateFirewallRuleGroupResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit CreateFirewallRuleGroupResponsePrivate(CreateFirewallRuleGroupResponse * const q);

    void parseCreateFirewallRuleGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFirewallRuleGroupResponse)
    Q_DISABLE_COPY(CreateFirewallRuleGroupResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
