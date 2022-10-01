// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIREWALLCONFIGSREQUEST_H
#define QTAWS_LISTFIREWALLCONFIGSREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListFirewallConfigsRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT ListFirewallConfigsRequest : public Route53ResolverRequest {

public:
    ListFirewallConfigsRequest(const ListFirewallConfigsRequest &other);
    ListFirewallConfigsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFirewallConfigsRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
