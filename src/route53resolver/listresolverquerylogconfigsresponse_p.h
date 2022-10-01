// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERQUERYLOGCONFIGSRESPONSE_P_H
#define QTAWS_LISTRESOLVERQUERYLOGCONFIGSRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class ListResolverQueryLogConfigsResponse;

class ListResolverQueryLogConfigsResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit ListResolverQueryLogConfigsResponsePrivate(ListResolverQueryLogConfigsResponse * const q);

    void parseListResolverQueryLogConfigsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListResolverQueryLogConfigsResponse)
    Q_DISABLE_COPY(ListResolverQueryLogConfigsResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
