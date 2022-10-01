// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEFIREWALLRULEGROUPREQUEST_P_H
#define QTAWS_DISASSOCIATEFIREWALLRULEGROUPREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "disassociatefirewallrulegrouprequest.h"

namespace QtAws {
namespace Route53Resolver {

class DisassociateFirewallRuleGroupRequest;

class DisassociateFirewallRuleGroupRequestPrivate : public Route53ResolverRequestPrivate {

public:
    DisassociateFirewallRuleGroupRequestPrivate(const Route53ResolverRequest::Action action,
                                   DisassociateFirewallRuleGroupRequest * const q);
    DisassociateFirewallRuleGroupRequestPrivate(const DisassociateFirewallRuleGroupRequestPrivate &other,
                                   DisassociateFirewallRuleGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateFirewallRuleGroupRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
