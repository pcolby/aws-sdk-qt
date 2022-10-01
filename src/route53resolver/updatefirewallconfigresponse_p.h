// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIREWALLCONFIGRESPONSE_P_H
#define QTAWS_UPDATEFIREWALLCONFIGRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class UpdateFirewallConfigResponse;

class UpdateFirewallConfigResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit UpdateFirewallConfigResponsePrivate(UpdateFirewallConfigResponse * const q);

    void parseUpdateFirewallConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFirewallConfigResponse)
    Q_DISABLE_COPY(UpdateFirewallConfigResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
