// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFIREWALLRULEGROUPASSOCIATIONREQUEST_P_H
#define QTAWS_GETFIREWALLRULEGROUPASSOCIATIONREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "getfirewallrulegroupassociationrequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetFirewallRuleGroupAssociationRequest;

class GetFirewallRuleGroupAssociationRequestPrivate : public Route53ResolverRequestPrivate {

public:
    GetFirewallRuleGroupAssociationRequestPrivate(const Route53ResolverRequest::Action action,
                                   GetFirewallRuleGroupAssociationRequest * const q);
    GetFirewallRuleGroupAssociationRequestPrivate(const GetFirewallRuleGroupAssociationRequestPrivate &other,
                                   GetFirewallRuleGroupAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFirewallRuleGroupAssociationRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
