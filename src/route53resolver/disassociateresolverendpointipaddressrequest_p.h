// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATERESOLVERENDPOINTIPADDRESSREQUEST_P_H
#define QTAWS_DISASSOCIATERESOLVERENDPOINTIPADDRESSREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "disassociateresolverendpointipaddressrequest.h"

namespace QtAws {
namespace Route53Resolver {

class DisassociateResolverEndpointIpAddressRequest;

class DisassociateResolverEndpointIpAddressRequestPrivate : public Route53ResolverRequestPrivate {

public:
    DisassociateResolverEndpointIpAddressRequestPrivate(const Route53ResolverRequest::Action action,
                                   DisassociateResolverEndpointIpAddressRequest * const q);
    DisassociateResolverEndpointIpAddressRequestPrivate(const DisassociateResolverEndpointIpAddressRequestPrivate &other,
                                   DisassociateResolverEndpointIpAddressRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateResolverEndpointIpAddressRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
