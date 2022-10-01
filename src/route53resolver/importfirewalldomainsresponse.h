// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTFIREWALLDOMAINSRESPONSE_H
#define QTAWS_IMPORTFIREWALLDOMAINSRESPONSE_H

#include "route53resolverresponse.h"
#include "importfirewalldomainsrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ImportFirewallDomainsResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT ImportFirewallDomainsResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    ImportFirewallDomainsResponse(const ImportFirewallDomainsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportFirewallDomainsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportFirewallDomainsResponse)
    Q_DISABLE_COPY(ImportFirewallDomainsResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
