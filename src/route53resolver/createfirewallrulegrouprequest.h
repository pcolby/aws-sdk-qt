// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFIREWALLRULEGROUPREQUEST_H
#define QTAWS_CREATEFIREWALLRULEGROUPREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class CreateFirewallRuleGroupRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT CreateFirewallRuleGroupRequest : public Route53ResolverRequest {

public:
    CreateFirewallRuleGroupRequest(const CreateFirewallRuleGroupRequest &other);
    CreateFirewallRuleGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFirewallRuleGroupRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
