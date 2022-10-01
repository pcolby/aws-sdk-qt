// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIREWALLRULEGROUPASSOCIATIONREQUEST_P_H
#define QTAWS_UPDATEFIREWALLRULEGROUPASSOCIATIONREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "updatefirewallrulegroupassociationrequest.h"

namespace QtAws {
namespace Route53Resolver {

class UpdateFirewallRuleGroupAssociationRequest;

class UpdateFirewallRuleGroupAssociationRequestPrivate : public Route53ResolverRequestPrivate {

public:
    UpdateFirewallRuleGroupAssociationRequestPrivate(const Route53ResolverRequest::Action action,
                                   UpdateFirewallRuleGroupAssociationRequest * const q);
    UpdateFirewallRuleGroupAssociationRequestPrivate(const UpdateFirewallRuleGroupAssociationRequestPrivate &other,
                                   UpdateFirewallRuleGroupAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFirewallRuleGroupAssociationRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
