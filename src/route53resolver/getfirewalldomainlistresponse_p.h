// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFIREWALLDOMAINLISTRESPONSE_P_H
#define QTAWS_GETFIREWALLDOMAINLISTRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class GetFirewallDomainListResponse;

class GetFirewallDomainListResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit GetFirewallDomainListResponsePrivate(GetFirewallDomainListResponse * const q);

    void parseGetFirewallDomainListResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFirewallDomainListResponse)
    Q_DISABLE_COPY(GetFirewallDomainListResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
