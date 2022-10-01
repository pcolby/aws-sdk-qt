// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATERESOLVERRULERESPONSE_P_H
#define QTAWS_ASSOCIATERESOLVERRULERESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class AssociateResolverRuleResponse;

class AssociateResolverRuleResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit AssociateResolverRuleResponsePrivate(AssociateResolverRuleResponse * const q);

    void parseAssociateResolverRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateResolverRuleResponse)
    Q_DISABLE_COPY(AssociateResolverRuleResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
