// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEFIREWALLRULEGROUPREQUEST_H
#define QTAWS_ASSOCIATEFIREWALLRULEGROUPREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class AssociateFirewallRuleGroupRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT AssociateFirewallRuleGroupRequest : public Route53ResolverRequest {

public:
    AssociateFirewallRuleGroupRequest(const AssociateFirewallRuleGroupRequest &other);
    AssociateFirewallRuleGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateFirewallRuleGroupRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
