// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIREWALLRULEREQUEST_H
#define QTAWS_UPDATEFIREWALLRULEREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class UpdateFirewallRuleRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT UpdateFirewallRuleRequest : public Route53ResolverRequest {

public:
    UpdateFirewallRuleRequest(const UpdateFirewallRuleRequest &other);
    UpdateFirewallRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFirewallRuleRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
