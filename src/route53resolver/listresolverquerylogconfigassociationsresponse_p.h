// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERQUERYLOGCONFIGASSOCIATIONSRESPONSE_P_H
#define QTAWS_LISTRESOLVERQUERYLOGCONFIGASSOCIATIONSRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class ListResolverQueryLogConfigAssociationsResponse;

class ListResolverQueryLogConfigAssociationsResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit ListResolverQueryLogConfigAssociationsResponsePrivate(ListResolverQueryLogConfigAssociationsResponse * const q);

    void parseListResolverQueryLogConfigAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListResolverQueryLogConfigAssociationsResponse)
    Q_DISABLE_COPY(ListResolverQueryLogConfigAssociationsResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
