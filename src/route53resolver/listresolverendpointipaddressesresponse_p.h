// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERENDPOINTIPADDRESSESRESPONSE_P_H
#define QTAWS_LISTRESOLVERENDPOINTIPADDRESSESRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class ListResolverEndpointIpAddressesResponse;

class ListResolverEndpointIpAddressesResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit ListResolverEndpointIpAddressesResponsePrivate(ListResolverEndpointIpAddressesResponse * const q);

    void parseListResolverEndpointIpAddressesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListResolverEndpointIpAddressesResponse)
    Q_DISABLE_COPY(ListResolverEndpointIpAddressesResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
