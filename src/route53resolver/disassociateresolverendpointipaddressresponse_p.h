// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATERESOLVERENDPOINTIPADDRESSRESPONSE_P_H
#define QTAWS_DISASSOCIATERESOLVERENDPOINTIPADDRESSRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class DisassociateResolverEndpointIpAddressResponse;

class DisassociateResolverEndpointIpAddressResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit DisassociateResolverEndpointIpAddressResponsePrivate(DisassociateResolverEndpointIpAddressResponse * const q);

    void parseDisassociateResolverEndpointIpAddressResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateResolverEndpointIpAddressResponse)
    Q_DISABLE_COPY(DisassociateResolverEndpointIpAddressResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
