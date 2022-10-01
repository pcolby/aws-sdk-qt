// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIREWALLDOMAINLISTSRESPONSE_H
#define QTAWS_LISTFIREWALLDOMAINLISTSRESPONSE_H

#include "route53resolverresponse.h"
#include "listfirewalldomainlistsrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListFirewallDomainListsResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT ListFirewallDomainListsResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    ListFirewallDomainListsResponse(const ListFirewallDomainListsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFirewallDomainListsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFirewallDomainListsResponse)
    Q_DISABLE_COPY(ListFirewallDomainListsResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
