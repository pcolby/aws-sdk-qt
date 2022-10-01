// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIREWALLRULEGROUPASSOCIATIONRESPONSE_H
#define QTAWS_UPDATEFIREWALLRULEGROUPASSOCIATIONRESPONSE_H

#include "route53resolverresponse.h"
#include "updatefirewallrulegroupassociationrequest.h"

namespace QtAws {
namespace Route53Resolver {

class UpdateFirewallRuleGroupAssociationResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT UpdateFirewallRuleGroupAssociationResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    UpdateFirewallRuleGroupAssociationResponse(const UpdateFirewallRuleGroupAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFirewallRuleGroupAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFirewallRuleGroupAssociationResponse)
    Q_DISABLE_COPY(UpdateFirewallRuleGroupAssociationResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
