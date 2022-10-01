// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFIREWALLCONFIGREQUEST_P_H
#define QTAWS_GETFIREWALLCONFIGREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "getfirewallconfigrequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetFirewallConfigRequest;

class GetFirewallConfigRequestPrivate : public Route53ResolverRequestPrivate {

public:
    GetFirewallConfigRequestPrivate(const Route53ResolverRequest::Action action,
                                   GetFirewallConfigRequest * const q);
    GetFirewallConfigRequestPrivate(const GetFirewallConfigRequestPrivate &other,
                                   GetFirewallConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFirewallConfigRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
