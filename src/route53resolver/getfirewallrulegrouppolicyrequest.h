// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFIREWALLRULEGROUPPOLICYREQUEST_H
#define QTAWS_GETFIREWALLRULEGROUPPOLICYREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetFirewallRuleGroupPolicyRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT GetFirewallRuleGroupPolicyRequest : public Route53ResolverRequest {

public:
    GetFirewallRuleGroupPolicyRequest(const GetFirewallRuleGroupPolicyRequest &other);
    GetFirewallRuleGroupPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFirewallRuleGroupPolicyRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
