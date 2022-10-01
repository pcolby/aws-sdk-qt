// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIREWALLRULEGROUPSRESPONSE_P_H
#define QTAWS_LISTFIREWALLRULEGROUPSRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class ListFirewallRuleGroupsResponse;

class ListFirewallRuleGroupsResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit ListFirewallRuleGroupsResponsePrivate(ListFirewallRuleGroupsResponse * const q);

    void parseListFirewallRuleGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFirewallRuleGroupsResponse)
    Q_DISABLE_COPY(ListFirewallRuleGroupsResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
