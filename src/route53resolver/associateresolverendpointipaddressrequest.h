// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATERESOLVERENDPOINTIPADDRESSREQUEST_H
#define QTAWS_ASSOCIATERESOLVERENDPOINTIPADDRESSREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class AssociateResolverEndpointIpAddressRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT AssociateResolverEndpointIpAddressRequest : public Route53ResolverRequest {

public:
    AssociateResolverEndpointIpAddressRequest(const AssociateResolverEndpointIpAddressRequest &other);
    AssociateResolverEndpointIpAddressRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateResolverEndpointIpAddressRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
