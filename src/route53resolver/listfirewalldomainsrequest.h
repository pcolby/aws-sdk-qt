// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIREWALLDOMAINSREQUEST_H
#define QTAWS_LISTFIREWALLDOMAINSREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListFirewallDomainsRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT ListFirewallDomainsRequest : public Route53ResolverRequest {

public:
    ListFirewallDomainsRequest(const ListFirewallDomainsRequest &other);
    ListFirewallDomainsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFirewallDomainsRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
