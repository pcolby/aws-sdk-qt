// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFIREWALLDOMAINLISTREQUEST_H
#define QTAWS_CREATEFIREWALLDOMAINLISTREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class CreateFirewallDomainListRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT CreateFirewallDomainListRequest : public Route53ResolverRequest {

public:
    CreateFirewallDomainListRequest(const CreateFirewallDomainListRequest &other);
    CreateFirewallDomainListRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFirewallDomainListRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
