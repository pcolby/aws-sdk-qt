// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERCONFIGSRESPONSE_P_H
#define QTAWS_LISTRESOLVERCONFIGSRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class ListResolverConfigsResponse;

class ListResolverConfigsResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit ListResolverConfigsResponsePrivate(ListResolverConfigsResponse * const q);

    void parseListResolverConfigsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListResolverConfigsResponse)
    Q_DISABLE_COPY(ListResolverConfigsResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
