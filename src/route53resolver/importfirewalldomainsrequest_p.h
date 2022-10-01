// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTFIREWALLDOMAINSREQUEST_P_H
#define QTAWS_IMPORTFIREWALLDOMAINSREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "importfirewalldomainsrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ImportFirewallDomainsRequest;

class ImportFirewallDomainsRequestPrivate : public Route53ResolverRequestPrivate {

public:
    ImportFirewallDomainsRequestPrivate(const Route53ResolverRequest::Action action,
                                   ImportFirewallDomainsRequest * const q);
    ImportFirewallDomainsRequestPrivate(const ImportFirewallDomainsRequestPrivate &other,
                                   ImportFirewallDomainsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportFirewallDomainsRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
