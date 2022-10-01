// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOLVERENDPOINTRESPONSE_P_H
#define QTAWS_CREATERESOLVERENDPOINTRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class CreateResolverEndpointResponse;

class CreateResolverEndpointResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit CreateResolverEndpointResponsePrivate(CreateResolverEndpointResponse * const q);

    void parseCreateResolverEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateResolverEndpointResponse)
    Q_DISABLE_COPY(CreateResolverEndpointResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
