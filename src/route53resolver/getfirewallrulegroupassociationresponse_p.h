// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFIREWALLRULEGROUPASSOCIATIONRESPONSE_P_H
#define QTAWS_GETFIREWALLRULEGROUPASSOCIATIONRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class GetFirewallRuleGroupAssociationResponse;

class GetFirewallRuleGroupAssociationResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit GetFirewallRuleGroupAssociationResponsePrivate(GetFirewallRuleGroupAssociationResponse * const q);

    void parseGetFirewallRuleGroupAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFirewallRuleGroupAssociationResponse)
    Q_DISABLE_COPY(GetFirewallRuleGroupAssociationResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
