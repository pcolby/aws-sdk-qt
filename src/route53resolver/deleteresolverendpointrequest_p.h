// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOLVERENDPOINTREQUEST_P_H
#define QTAWS_DELETERESOLVERENDPOINTREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "deleteresolverendpointrequest.h"

namespace QtAws {
namespace Route53Resolver {

class DeleteResolverEndpointRequest;

class DeleteResolverEndpointRequestPrivate : public Route53ResolverRequestPrivate {

public:
    DeleteResolverEndpointRequestPrivate(const Route53ResolverRequest::Action action,
                                   DeleteResolverEndpointRequest * const q);
    DeleteResolverEndpointRequestPrivate(const DeleteResolverEndpointRequestPrivate &other,
                                   DeleteResolverEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteResolverEndpointRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
