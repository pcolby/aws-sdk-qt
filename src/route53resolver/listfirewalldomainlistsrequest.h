// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIREWALLDOMAINLISTSREQUEST_H
#define QTAWS_LISTFIREWALLDOMAINLISTSREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListFirewallDomainListsRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT ListFirewallDomainListsRequest : public Route53ResolverRequest {

public:
    ListFirewallDomainListsRequest(const ListFirewallDomainListsRequest &other);
    ListFirewallDomainListsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFirewallDomainListsRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
