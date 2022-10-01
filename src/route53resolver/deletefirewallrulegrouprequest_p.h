// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFIREWALLRULEGROUPREQUEST_P_H
#define QTAWS_DELETEFIREWALLRULEGROUPREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "deletefirewallrulegrouprequest.h"

namespace QtAws {
namespace Route53Resolver {

class DeleteFirewallRuleGroupRequest;

class DeleteFirewallRuleGroupRequestPrivate : public Route53ResolverRequestPrivate {

public:
    DeleteFirewallRuleGroupRequestPrivate(const Route53ResolverRequest::Action action,
                                   DeleteFirewallRuleGroupRequest * const q);
    DeleteFirewallRuleGroupRequestPrivate(const DeleteFirewallRuleGroupRequestPrivate &other,
                                   DeleteFirewallRuleGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFirewallRuleGroupRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
