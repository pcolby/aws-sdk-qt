// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATERESOLVERENDPOINTIPADDRESSRESPONSE_P_H
#define QTAWS_ASSOCIATERESOLVERENDPOINTIPADDRESSRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class AssociateResolverEndpointIpAddressResponse;

class AssociateResolverEndpointIpAddressResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit AssociateResolverEndpointIpAddressResponsePrivate(AssociateResolverEndpointIpAddressResponse * const q);

    void parseAssociateResolverEndpointIpAddressResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateResolverEndpointIpAddressResponse)
    Q_DISABLE_COPY(AssociateResolverEndpointIpAddressResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
