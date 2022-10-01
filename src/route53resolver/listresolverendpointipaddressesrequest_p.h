// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERENDPOINTIPADDRESSESREQUEST_P_H
#define QTAWS_LISTRESOLVERENDPOINTIPADDRESSESREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "listresolverendpointipaddressesrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListResolverEndpointIpAddressesRequest;

class ListResolverEndpointIpAddressesRequestPrivate : public Route53ResolverRequestPrivate {

public:
    ListResolverEndpointIpAddressesRequestPrivate(const Route53ResolverRequest::Action action,
                                   ListResolverEndpointIpAddressesRequest * const q);
    ListResolverEndpointIpAddressesRequestPrivate(const ListResolverEndpointIpAddressesRequestPrivate &other,
                                   ListResolverEndpointIpAddressesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListResolverEndpointIpAddressesRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
