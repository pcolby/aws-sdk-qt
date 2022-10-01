// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOLVERCONFIGRESPONSE_P_H
#define QTAWS_UPDATERESOLVERCONFIGRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class UpdateResolverConfigResponse;

class UpdateResolverConfigResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit UpdateResolverConfigResponsePrivate(UpdateResolverConfigResponse * const q);

    void parseUpdateResolverConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateResolverConfigResponse)
    Q_DISABLE_COPY(UpdateResolverConfigResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
