// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFIREWALLRULEREQUEST_P_H
#define QTAWS_DELETEFIREWALLRULEREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "deletefirewallrulerequest.h"

namespace QtAws {
namespace Route53Resolver {

class DeleteFirewallRuleRequest;

class DeleteFirewallRuleRequestPrivate : public Route53ResolverRequestPrivate {

public:
    DeleteFirewallRuleRequestPrivate(const Route53ResolverRequest::Action action,
                                   DeleteFirewallRuleRequest * const q);
    DeleteFirewallRuleRequestPrivate(const DeleteFirewallRuleRequestPrivate &other,
                                   DeleteFirewallRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFirewallRuleRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
