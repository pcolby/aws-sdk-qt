// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIREWALLDOMAINSREQUEST_P_H
#define QTAWS_UPDATEFIREWALLDOMAINSREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "updatefirewalldomainsrequest.h"

namespace QtAws {
namespace Route53Resolver {

class UpdateFirewallDomainsRequest;

class UpdateFirewallDomainsRequestPrivate : public Route53ResolverRequestPrivate {

public:
    UpdateFirewallDomainsRequestPrivate(const Route53ResolverRequest::Action action,
                                   UpdateFirewallDomainsRequest * const q);
    UpdateFirewallDomainsRequestPrivate(const UpdateFirewallDomainsRequestPrivate &other,
                                   UpdateFirewallDomainsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFirewallDomainsRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
