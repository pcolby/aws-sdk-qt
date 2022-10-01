// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFIREWALLRULEREQUEST_P_H
#define QTAWS_CREATEFIREWALLRULEREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "createfirewallrulerequest.h"

namespace QtAws {
namespace Route53Resolver {

class CreateFirewallRuleRequest;

class CreateFirewallRuleRequestPrivate : public Route53ResolverRequestPrivate {

public:
    CreateFirewallRuleRequestPrivate(const Route53ResolverRequest::Action action,
                                   CreateFirewallRuleRequest * const q);
    CreateFirewallRuleRequestPrivate(const CreateFirewallRuleRequestPrivate &other,
                                   CreateFirewallRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFirewallRuleRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
