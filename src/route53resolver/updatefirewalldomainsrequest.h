// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIREWALLDOMAINSREQUEST_H
#define QTAWS_UPDATEFIREWALLDOMAINSREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class UpdateFirewallDomainsRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT UpdateFirewallDomainsRequest : public Route53ResolverRequest {

public:
    UpdateFirewallDomainsRequest(const UpdateFirewallDomainsRequest &other);
    UpdateFirewallDomainsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFirewallDomainsRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
