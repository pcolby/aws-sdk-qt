// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIREWALLRULEGROUPASSOCIATIONSRESPONSE_P_H
#define QTAWS_LISTFIREWALLRULEGROUPASSOCIATIONSRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class ListFirewallRuleGroupAssociationsResponse;

class ListFirewallRuleGroupAssociationsResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit ListFirewallRuleGroupAssociationsResponsePrivate(ListFirewallRuleGroupAssociationsResponse * const q);

    void parseListFirewallRuleGroupAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFirewallRuleGroupAssociationsResponse)
    Q_DISABLE_COPY(ListFirewallRuleGroupAssociationsResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
