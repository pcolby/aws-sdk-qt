// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERRULESRESPONSE_P_H
#define QTAWS_LISTRESOLVERRULESRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class ListResolverRulesResponse;

class ListResolverRulesResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit ListResolverRulesResponsePrivate(ListResolverRulesResponse * const q);

    void parseListResolverRulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListResolverRulesResponse)
    Q_DISABLE_COPY(ListResolverRulesResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
