// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFIREWALLRULERESPONSE_P_H
#define QTAWS_DELETEFIREWALLRULERESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class DeleteFirewallRuleResponse;

class DeleteFirewallRuleResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit DeleteFirewallRuleResponsePrivate(DeleteFirewallRuleResponse * const q);

    void parseDeleteFirewallRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFirewallRuleResponse)
    Q_DISABLE_COPY(DeleteFirewallRuleResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
