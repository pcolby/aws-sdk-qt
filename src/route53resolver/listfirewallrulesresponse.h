// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIREWALLRULESRESPONSE_H
#define QTAWS_LISTFIREWALLRULESRESPONSE_H

#include "route53resolverresponse.h"
#include "listfirewallrulesrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListFirewallRulesResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT ListFirewallRulesResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    ListFirewallRulesResponse(const ListFirewallRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFirewallRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFirewallRulesResponse)
    Q_DISABLE_COPY(ListFirewallRulesResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
