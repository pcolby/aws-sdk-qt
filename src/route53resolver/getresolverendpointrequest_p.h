// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERENDPOINTREQUEST_P_H
#define QTAWS_GETRESOLVERENDPOINTREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "getresolverendpointrequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetResolverEndpointRequest;

class GetResolverEndpointRequestPrivate : public Route53ResolverRequestPrivate {

public:
    GetResolverEndpointRequestPrivate(const Route53ResolverRequest::Action action,
                                   GetResolverEndpointRequest * const q);
    GetResolverEndpointRequestPrivate(const GetResolverEndpointRequestPrivate &other,
                                   GetResolverEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetResolverEndpointRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
