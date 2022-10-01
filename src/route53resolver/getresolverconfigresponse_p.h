// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERCONFIGRESPONSE_P_H
#define QTAWS_GETRESOLVERCONFIGRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class GetResolverConfigResponse;

class GetResolverConfigResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit GetResolverConfigResponsePrivate(GetResolverConfigResponse * const q);

    void parseGetResolverConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetResolverConfigResponse)
    Q_DISABLE_COPY(GetResolverConfigResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
