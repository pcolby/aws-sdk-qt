// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERDNSSECCONFIGSRESPONSE_P_H
#define QTAWS_LISTRESOLVERDNSSECCONFIGSRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class ListResolverDnssecConfigsResponse;

class ListResolverDnssecConfigsResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit ListResolverDnssecConfigsResponsePrivate(ListResolverDnssecConfigsResponse * const q);

    void parseListResolverDnssecConfigsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListResolverDnssecConfigsResponse)
    Q_DISABLE_COPY(ListResolverDnssecConfigsResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
