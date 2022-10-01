// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFIREWALLRULEGROUPRESPONSE_P_H
#define QTAWS_DELETEFIREWALLRULEGROUPRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class DeleteFirewallRuleGroupResponse;

class DeleteFirewallRuleGroupResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit DeleteFirewallRuleGroupResponsePrivate(DeleteFirewallRuleGroupResponse * const q);

    void parseDeleteFirewallRuleGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFirewallRuleGroupResponse)
    Q_DISABLE_COPY(DeleteFirewallRuleGroupResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
