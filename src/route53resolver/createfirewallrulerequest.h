// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFIREWALLRULEREQUEST_H
#define QTAWS_CREATEFIREWALLRULEREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class CreateFirewallRuleRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT CreateFirewallRuleRequest : public Route53ResolverRequest {

public:
    CreateFirewallRuleRequest(const CreateFirewallRuleRequest &other);
    CreateFirewallRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFirewallRuleRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
