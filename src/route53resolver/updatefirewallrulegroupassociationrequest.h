// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIREWALLRULEGROUPASSOCIATIONREQUEST_H
#define QTAWS_UPDATEFIREWALLRULEGROUPASSOCIATIONREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class UpdateFirewallRuleGroupAssociationRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT UpdateFirewallRuleGroupAssociationRequest : public Route53ResolverRequest {

public:
    UpdateFirewallRuleGroupAssociationRequest(const UpdateFirewallRuleGroupAssociationRequest &other);
    UpdateFirewallRuleGroupAssociationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFirewallRuleGroupAssociationRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
