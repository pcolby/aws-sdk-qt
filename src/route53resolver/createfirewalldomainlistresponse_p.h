// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFIREWALLDOMAINLISTRESPONSE_P_H
#define QTAWS_CREATEFIREWALLDOMAINLISTRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class CreateFirewallDomainListResponse;

class CreateFirewallDomainListResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit CreateFirewallDomainListResponsePrivate(CreateFirewallDomainListResponse * const q);

    void parseCreateFirewallDomainListResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFirewallDomainListResponse)
    Q_DISABLE_COPY(CreateFirewallDomainListResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
