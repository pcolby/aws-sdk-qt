// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFIREWALLRULEGROUPPOLICYRESPONSE_H
#define QTAWS_GETFIREWALLRULEGROUPPOLICYRESPONSE_H

#include "route53resolverresponse.h"
#include "getfirewallrulegrouppolicyrequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetFirewallRuleGroupPolicyResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT GetFirewallRuleGroupPolicyResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    GetFirewallRuleGroupPolicyResponse(const GetFirewallRuleGroupPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFirewallRuleGroupPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFirewallRuleGroupPolicyResponse)
    Q_DISABLE_COPY(GetFirewallRuleGroupPolicyResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
