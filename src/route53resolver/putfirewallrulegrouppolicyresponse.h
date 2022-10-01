// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTFIREWALLRULEGROUPPOLICYRESPONSE_H
#define QTAWS_PUTFIREWALLRULEGROUPPOLICYRESPONSE_H

#include "route53resolverresponse.h"
#include "putfirewallrulegrouppolicyrequest.h"

namespace QtAws {
namespace Route53Resolver {

class PutFirewallRuleGroupPolicyResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT PutFirewallRuleGroupPolicyResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    PutFirewallRuleGroupPolicyResponse(const PutFirewallRuleGroupPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutFirewallRuleGroupPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutFirewallRuleGroupPolicyResponse)
    Q_DISABLE_COPY(PutFirewallRuleGroupPolicyResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
