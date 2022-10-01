// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFIREWALLRULEGROUPREQUEST_H
#define QTAWS_DELETEFIREWALLRULEGROUPREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class DeleteFirewallRuleGroupRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT DeleteFirewallRuleGroupRequest : public Route53ResolverRequest {

public:
    DeleteFirewallRuleGroupRequest(const DeleteFirewallRuleGroupRequest &other);
    DeleteFirewallRuleGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFirewallRuleGroupRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
