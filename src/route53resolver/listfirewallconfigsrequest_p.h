// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIREWALLCONFIGSREQUEST_P_H
#define QTAWS_LISTFIREWALLCONFIGSREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "listfirewallconfigsrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListFirewallConfigsRequest;

class ListFirewallConfigsRequestPrivate : public Route53ResolverRequestPrivate {

public:
    ListFirewallConfigsRequestPrivate(const Route53ResolverRequest::Action action,
                                   ListFirewallConfigsRequest * const q);
    ListFirewallConfigsRequestPrivate(const ListFirewallConfigsRequestPrivate &other,
                                   ListFirewallConfigsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFirewallConfigsRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
