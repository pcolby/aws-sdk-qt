// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIREWALLRULERESPONSE_P_H
#define QTAWS_UPDATEFIREWALLRULERESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class UpdateFirewallRuleResponse;

class UpdateFirewallRuleResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit UpdateFirewallRuleResponsePrivate(UpdateFirewallRuleResponse * const q);

    void parseUpdateFirewallRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFirewallRuleResponse)
    Q_DISABLE_COPY(UpdateFirewallRuleResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
