// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTFIREWALLRULEGROUPPOLICYREQUEST_H
#define QTAWS_PUTFIREWALLRULEGROUPPOLICYREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class PutFirewallRuleGroupPolicyRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT PutFirewallRuleGroupPolicyRequest : public Route53ResolverRequest {

public:
    PutFirewallRuleGroupPolicyRequest(const PutFirewallRuleGroupPolicyRequest &other);
    PutFirewallRuleGroupPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutFirewallRuleGroupPolicyRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
