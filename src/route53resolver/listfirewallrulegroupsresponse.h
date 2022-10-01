// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIREWALLRULEGROUPSRESPONSE_H
#define QTAWS_LISTFIREWALLRULEGROUPSRESPONSE_H

#include "route53resolverresponse.h"
#include "listfirewallrulegroupsrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListFirewallRuleGroupsResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT ListFirewallRuleGroupsResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    ListFirewallRuleGroupsResponse(const ListFirewallRuleGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFirewallRuleGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFirewallRuleGroupsResponse)
    Q_DISABLE_COPY(ListFirewallRuleGroupsResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
