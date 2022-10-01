// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFIREWALLRULERESPONSE_P_H
#define QTAWS_CREATEFIREWALLRULERESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class CreateFirewallRuleResponse;

class CreateFirewallRuleResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit CreateFirewallRuleResponsePrivate(CreateFirewallRuleResponse * const q);

    void parseCreateFirewallRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFirewallRuleResponse)
    Q_DISABLE_COPY(CreateFirewallRuleResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
