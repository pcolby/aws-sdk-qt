// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERENDPOINTSREQUEST_P_H
#define QTAWS_LISTRESOLVERENDPOINTSREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "listresolverendpointsrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListResolverEndpointsRequest;

class ListResolverEndpointsRequestPrivate : public Route53ResolverRequestPrivate {

public:
    ListResolverEndpointsRequestPrivate(const Route53ResolverRequest::Action action,
                                   ListResolverEndpointsRequest * const q);
    ListResolverEndpointsRequestPrivate(const ListResolverEndpointsRequestPrivate &other,
                                   ListResolverEndpointsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListResolverEndpointsRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
