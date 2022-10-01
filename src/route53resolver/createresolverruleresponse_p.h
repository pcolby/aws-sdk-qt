// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOLVERRULERESPONSE_P_H
#define QTAWS_CREATERESOLVERRULERESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class CreateResolverRuleResponse;

class CreateResolverRuleResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit CreateResolverRuleResponsePrivate(CreateResolverRuleResponse * const q);

    void parseCreateResolverRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateResolverRuleResponse)
    Q_DISABLE_COPY(CreateResolverRuleResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
