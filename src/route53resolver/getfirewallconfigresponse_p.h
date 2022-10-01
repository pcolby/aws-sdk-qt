// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFIREWALLCONFIGRESPONSE_P_H
#define QTAWS_GETFIREWALLCONFIGRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class GetFirewallConfigResponse;

class GetFirewallConfigResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit GetFirewallConfigResponsePrivate(GetFirewallConfigResponse * const q);

    void parseGetFirewallConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFirewallConfigResponse)
    Q_DISABLE_COPY(GetFirewallConfigResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
