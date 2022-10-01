// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERRULEASSOCIATIONRESPONSE_P_H
#define QTAWS_GETRESOLVERRULEASSOCIATIONRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class GetResolverRuleAssociationResponse;

class GetResolverRuleAssociationResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit GetResolverRuleAssociationResponsePrivate(GetResolverRuleAssociationResponse * const q);

    void parseGetResolverRuleAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetResolverRuleAssociationResponse)
    Q_DISABLE_COPY(GetResolverRuleAssociationResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
