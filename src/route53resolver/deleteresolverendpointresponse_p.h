// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOLVERENDPOINTRESPONSE_P_H
#define QTAWS_DELETERESOLVERENDPOINTRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class DeleteResolverEndpointResponse;

class DeleteResolverEndpointResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit DeleteResolverEndpointResponsePrivate(DeleteResolverEndpointResponse * const q);

    void parseDeleteResolverEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteResolverEndpointResponse)
    Q_DISABLE_COPY(DeleteResolverEndpointResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
