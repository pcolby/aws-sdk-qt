// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIREWALLRULEREQUEST_P_H
#define QTAWS_UPDATEFIREWALLRULEREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "updatefirewallrulerequest.h"

namespace QtAws {
namespace Route53Resolver {

class UpdateFirewallRuleRequest;

class UpdateFirewallRuleRequestPrivate : public Route53ResolverRequestPrivate {

public:
    UpdateFirewallRuleRequestPrivate(const Route53ResolverRequest::Action action,
                                   UpdateFirewallRuleRequest * const q);
    UpdateFirewallRuleRequestPrivate(const UpdateFirewallRuleRequestPrivate &other,
                                   UpdateFirewallRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFirewallRuleRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
