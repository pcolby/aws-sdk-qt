// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTFIREWALLDOMAINSRESPONSE_P_H
#define QTAWS_IMPORTFIREWALLDOMAINSRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class ImportFirewallDomainsResponse;

class ImportFirewallDomainsResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit ImportFirewallDomainsResponsePrivate(ImportFirewallDomainsResponse * const q);

    void parseImportFirewallDomainsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportFirewallDomainsResponse)
    Q_DISABLE_COPY(ImportFirewallDomainsResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
