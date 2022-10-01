// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIREWALLCONFIGSRESPONSE_H
#define QTAWS_LISTFIREWALLCONFIGSRESPONSE_H

#include "route53resolverresponse.h"
#include "listfirewallconfigsrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListFirewallConfigsResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT ListFirewallConfigsResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    ListFirewallConfigsResponse(const ListFirewallConfigsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFirewallConfigsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFirewallConfigsResponse)
    Q_DISABLE_COPY(ListFirewallConfigsResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
