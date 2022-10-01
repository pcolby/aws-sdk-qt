// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIREWALLDOMAINSRESPONSE_P_H
#define QTAWS_UPDATEFIREWALLDOMAINSRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class UpdateFirewallDomainsResponse;

class UpdateFirewallDomainsResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit UpdateFirewallDomainsResponsePrivate(UpdateFirewallDomainsResponse * const q);

    void parseUpdateFirewallDomainsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFirewallDomainsResponse)
    Q_DISABLE_COPY(UpdateFirewallDomainsResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
