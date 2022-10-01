// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIREWALLRULEGROUPSREQUEST_H
#define QTAWS_LISTFIREWALLRULEGROUPSREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListFirewallRuleGroupsRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT ListFirewallRuleGroupsRequest : public Route53ResolverRequest {

public:
    ListFirewallRuleGroupsRequest(const ListFirewallRuleGroupsRequest &other);
    ListFirewallRuleGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFirewallRuleGroupsRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
