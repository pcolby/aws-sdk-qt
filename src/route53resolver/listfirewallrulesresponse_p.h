// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIREWALLRULESRESPONSE_P_H
#define QTAWS_LISTFIREWALLRULESRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class ListFirewallRulesResponse;

class ListFirewallRulesResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit ListFirewallRulesResponsePrivate(ListFirewallRulesResponse * const q);

    void parseListFirewallRulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFirewallRulesResponse)
    Q_DISABLE_COPY(ListFirewallRulesResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
