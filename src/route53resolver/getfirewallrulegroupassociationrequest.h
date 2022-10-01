// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFIREWALLRULEGROUPASSOCIATIONREQUEST_H
#define QTAWS_GETFIREWALLRULEGROUPASSOCIATIONREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetFirewallRuleGroupAssociationRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT GetFirewallRuleGroupAssociationRequest : public Route53ResolverRequest {

public:
    GetFirewallRuleGroupAssociationRequest(const GetFirewallRuleGroupAssociationRequest &other);
    GetFirewallRuleGroupAssociationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFirewallRuleGroupAssociationRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
