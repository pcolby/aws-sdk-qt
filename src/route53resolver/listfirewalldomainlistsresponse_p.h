// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIREWALLDOMAINLISTSRESPONSE_P_H
#define QTAWS_LISTFIREWALLDOMAINLISTSRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class ListFirewallDomainListsResponse;

class ListFirewallDomainListsResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit ListFirewallDomainListsResponsePrivate(ListFirewallDomainListsResponse * const q);

    void parseListFirewallDomainListsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFirewallDomainListsResponse)
    Q_DISABLE_COPY(ListFirewallDomainListsResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
