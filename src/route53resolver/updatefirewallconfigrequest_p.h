// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIREWALLCONFIGREQUEST_P_H
#define QTAWS_UPDATEFIREWALLCONFIGREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "updatefirewallconfigrequest.h"

namespace QtAws {
namespace Route53Resolver {

class UpdateFirewallConfigRequest;

class UpdateFirewallConfigRequestPrivate : public Route53ResolverRequestPrivate {

public:
    UpdateFirewallConfigRequestPrivate(const Route53ResolverRequest::Action action,
                                   UpdateFirewallConfigRequest * const q);
    UpdateFirewallConfigRequestPrivate(const UpdateFirewallConfigRequestPrivate &other,
                                   UpdateFirewallConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFirewallConfigRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
