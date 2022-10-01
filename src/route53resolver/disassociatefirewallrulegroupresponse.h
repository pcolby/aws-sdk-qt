// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEFIREWALLRULEGROUPRESPONSE_H
#define QTAWS_DISASSOCIATEFIREWALLRULEGROUPRESPONSE_H

#include "route53resolverresponse.h"
#include "disassociatefirewallrulegrouprequest.h"

namespace QtAws {
namespace Route53Resolver {

class DisassociateFirewallRuleGroupResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT DisassociateFirewallRuleGroupResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    DisassociateFirewallRuleGroupResponse(const DisassociateFirewallRuleGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateFirewallRuleGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateFirewallRuleGroupResponse)
    Q_DISABLE_COPY(DisassociateFirewallRuleGroupResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
