// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIREWALLCONFIGSRESPONSE_P_H
#define QTAWS_LISTFIREWALLCONFIGSRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class ListFirewallConfigsResponse;

class ListFirewallConfigsResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit ListFirewallConfigsResponsePrivate(ListFirewallConfigsResponse * const q);

    void parseListFirewallConfigsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFirewallConfigsResponse)
    Q_DISABLE_COPY(ListFirewallConfigsResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
