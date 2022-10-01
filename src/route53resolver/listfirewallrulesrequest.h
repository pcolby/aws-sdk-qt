// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIREWALLRULESREQUEST_H
#define QTAWS_LISTFIREWALLRULESREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListFirewallRulesRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT ListFirewallRulesRequest : public Route53ResolverRequest {

public:
    ListFirewallRulesRequest(const ListFirewallRulesRequest &other);
    ListFirewallRulesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFirewallRulesRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
