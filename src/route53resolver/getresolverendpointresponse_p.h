// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERENDPOINTRESPONSE_P_H
#define QTAWS_GETRESOLVERENDPOINTRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class GetResolverEndpointResponse;

class GetResolverEndpointResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit GetResolverEndpointResponsePrivate(GetResolverEndpointResponse * const q);

    void parseGetResolverEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetResolverEndpointResponse)
    Q_DISABLE_COPY(GetResolverEndpointResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
