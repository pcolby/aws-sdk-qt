// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEFIREWALLRULEGROUPRESPONSE_H
#define QTAWS_ASSOCIATEFIREWALLRULEGROUPRESPONSE_H

#include "route53resolverresponse.h"
#include "associatefirewallrulegrouprequest.h"

namespace QtAws {
namespace Route53Resolver {

class AssociateFirewallRuleGroupResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT AssociateFirewallRuleGroupResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    AssociateFirewallRuleGroupResponse(const AssociateFirewallRuleGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateFirewallRuleGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateFirewallRuleGroupResponse)
    Q_DISABLE_COPY(AssociateFirewallRuleGroupResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
