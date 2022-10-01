// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOLVERENDPOINTREQUEST_P_H
#define QTAWS_CREATERESOLVERENDPOINTREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "createresolverendpointrequest.h"

namespace QtAws {
namespace Route53Resolver {

class CreateResolverEndpointRequest;

class CreateResolverEndpointRequestPrivate : public Route53ResolverRequestPrivate {

public:
    CreateResolverEndpointRequestPrivate(const Route53ResolverRequest::Action action,
                                   CreateResolverEndpointRequest * const q);
    CreateResolverEndpointRequestPrivate(const CreateResolverEndpointRequestPrivate &other,
                                   CreateResolverEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateResolverEndpointRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
