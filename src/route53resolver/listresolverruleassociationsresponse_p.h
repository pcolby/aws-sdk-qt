// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERRULEASSOCIATIONSRESPONSE_P_H
#define QTAWS_LISTRESOLVERRULEASSOCIATIONSRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class ListResolverRuleAssociationsResponse;

class ListResolverRuleAssociationsResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit ListResolverRuleAssociationsResponsePrivate(ListResolverRuleAssociationsResponse * const q);

    void parseListResolverRuleAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListResolverRuleAssociationsResponse)
    Q_DISABLE_COPY(ListResolverRuleAssociationsResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
