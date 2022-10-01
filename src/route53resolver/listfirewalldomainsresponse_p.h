// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIREWALLDOMAINSRESPONSE_P_H
#define QTAWS_LISTFIREWALLDOMAINSRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class ListFirewallDomainsResponse;

class ListFirewallDomainsResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit ListFirewallDomainsResponsePrivate(ListFirewallDomainsResponse * const q);

    void parseListFirewallDomainsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFirewallDomainsResponse)
    Q_DISABLE_COPY(ListFirewallDomainsResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
