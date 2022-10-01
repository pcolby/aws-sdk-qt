// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEFIREWALLRULEGROUPREQUEST_H
#define QTAWS_DISASSOCIATEFIREWALLRULEGROUPREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class DisassociateFirewallRuleGroupRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT DisassociateFirewallRuleGroupRequest : public Route53ResolverRequest {

public:
    DisassociateFirewallRuleGroupRequest(const DisassociateFirewallRuleGroupRequest &other);
    DisassociateFirewallRuleGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateFirewallRuleGroupRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
