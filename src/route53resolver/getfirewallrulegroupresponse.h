// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFIREWALLRULEGROUPRESPONSE_H
#define QTAWS_GETFIREWALLRULEGROUPRESPONSE_H

#include "route53resolverresponse.h"
#include "getfirewallrulegrouprequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetFirewallRuleGroupResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT GetFirewallRuleGroupResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    GetFirewallRuleGroupResponse(const GetFirewallRuleGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFirewallRuleGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFirewallRuleGroupResponse)
    Q_DISABLE_COPY(GetFirewallRuleGroupResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
