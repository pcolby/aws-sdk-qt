// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFIREWALLRULEGROUPASSOCIATIONRESPONSE_H
#define QTAWS_GETFIREWALLRULEGROUPASSOCIATIONRESPONSE_H

#include "route53resolverresponse.h"
#include "getfirewallrulegroupassociationrequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetFirewallRuleGroupAssociationResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT GetFirewallRuleGroupAssociationResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    GetFirewallRuleGroupAssociationResponse(const GetFirewallRuleGroupAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFirewallRuleGroupAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFirewallRuleGroupAssociationResponse)
    Q_DISABLE_COPY(GetFirewallRuleGroupAssociationResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
