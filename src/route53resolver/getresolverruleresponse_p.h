// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERRULERESPONSE_P_H
#define QTAWS_GETRESOLVERRULERESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class GetResolverRuleResponse;

class GetResolverRuleResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit GetResolverRuleResponsePrivate(GetResolverRuleResponse * const q);

    void parseGetResolverRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetResolverRuleResponse)
    Q_DISABLE_COPY(GetResolverRuleResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
