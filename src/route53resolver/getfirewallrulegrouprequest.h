// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFIREWALLRULEGROUPREQUEST_H
#define QTAWS_GETFIREWALLRULEGROUPREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetFirewallRuleGroupRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT GetFirewallRuleGroupRequest : public Route53ResolverRequest {

public:
    GetFirewallRuleGroupRequest(const GetFirewallRuleGroupRequest &other);
    GetFirewallRuleGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFirewallRuleGroupRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
