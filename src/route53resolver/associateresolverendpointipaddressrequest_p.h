// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATERESOLVERENDPOINTIPADDRESSREQUEST_P_H
#define QTAWS_ASSOCIATERESOLVERENDPOINTIPADDRESSREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "associateresolverendpointipaddressrequest.h"

namespace QtAws {
namespace Route53Resolver {

class AssociateResolverEndpointIpAddressRequest;

class AssociateResolverEndpointIpAddressRequestPrivate : public Route53ResolverRequestPrivate {

public:
    AssociateResolverEndpointIpAddressRequestPrivate(const Route53ResolverRequest::Action action,
                                   AssociateResolverEndpointIpAddressRequest * const q);
    AssociateResolverEndpointIpAddressRequestPrivate(const AssociateResolverEndpointIpAddressRequestPrivate &other,
                                   AssociateResolverEndpointIpAddressRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateResolverEndpointIpAddressRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
