// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIREWALLRULEGROUPASSOCIATIONRESPONSE_P_H
#define QTAWS_UPDATEFIREWALLRULEGROUPASSOCIATIONRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class UpdateFirewallRuleGroupAssociationResponse;

class UpdateFirewallRuleGroupAssociationResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit UpdateFirewallRuleGroupAssociationResponsePrivate(UpdateFirewallRuleGroupAssociationResponse * const q);

    void parseUpdateFirewallRuleGroupAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFirewallRuleGroupAssociationResponse)
    Q_DISABLE_COPY(UpdateFirewallRuleGroupAssociationResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
