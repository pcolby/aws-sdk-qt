// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFIREWALLRULEGROUPREQUEST_P_H
#define QTAWS_CREATEFIREWALLRULEGROUPREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "createfirewallrulegrouprequest.h"

namespace QtAws {
namespace Route53Resolver {

class CreateFirewallRuleGroupRequest;

class CreateFirewallRuleGroupRequestPrivate : public Route53ResolverRequestPrivate {

public:
    CreateFirewallRuleGroupRequestPrivate(const Route53ResolverRequest::Action action,
                                   CreateFirewallRuleGroupRequest * const q);
    CreateFirewallRuleGroupRequestPrivate(const CreateFirewallRuleGroupRequestPrivate &other,
                                   CreateFirewallRuleGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFirewallRuleGroupRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
