// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIREWALLRULEGROUPASSOCIATIONSREQUEST_H
#define QTAWS_LISTFIREWALLRULEGROUPASSOCIATIONSREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListFirewallRuleGroupAssociationsRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT ListFirewallRuleGroupAssociationsRequest : public Route53ResolverRequest {

public:
    ListFirewallRuleGroupAssociationsRequest(const ListFirewallRuleGroupAssociationsRequest &other);
    ListFirewallRuleGroupAssociationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFirewallRuleGroupAssociationsRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
