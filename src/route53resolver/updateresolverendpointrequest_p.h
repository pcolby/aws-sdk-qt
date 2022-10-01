// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOLVERENDPOINTREQUEST_P_H
#define QTAWS_UPDATERESOLVERENDPOINTREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "updateresolverendpointrequest.h"

namespace QtAws {
namespace Route53Resolver {

class UpdateResolverEndpointRequest;

class UpdateResolverEndpointRequestPrivate : public Route53ResolverRequestPrivate {

public:
    UpdateResolverEndpointRequestPrivate(const Route53ResolverRequest::Action action,
                                   UpdateResolverEndpointRequest * const q);
    UpdateResolverEndpointRequestPrivate(const UpdateResolverEndpointRequestPrivate &other,
                                   UpdateResolverEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateResolverEndpointRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
