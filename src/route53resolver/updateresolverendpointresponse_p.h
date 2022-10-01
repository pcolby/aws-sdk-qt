// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOLVERENDPOINTRESPONSE_P_H
#define QTAWS_UPDATERESOLVERENDPOINTRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class UpdateResolverEndpointResponse;

class UpdateResolverEndpointResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit UpdateResolverEndpointResponsePrivate(UpdateResolverEndpointResponse * const q);

    void parseUpdateResolverEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateResolverEndpointResponse)
    Q_DISABLE_COPY(UpdateResolverEndpointResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
