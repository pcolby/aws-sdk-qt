// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFIREWALLDOMAINLISTRESPONSE_P_H
#define QTAWS_DELETEFIREWALLDOMAINLISTRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class DeleteFirewallDomainListResponse;

class DeleteFirewallDomainListResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit DeleteFirewallDomainListResponsePrivate(DeleteFirewallDomainListResponse * const q);

    void parseDeleteFirewallDomainListResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFirewallDomainListResponse)
    Q_DISABLE_COPY(DeleteFirewallDomainListResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
