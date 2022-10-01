// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOLVERRULERESPONSE_P_H
#define QTAWS_DELETERESOLVERRULERESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class DeleteResolverRuleResponse;

class DeleteResolverRuleResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit DeleteResolverRuleResponsePrivate(DeleteResolverRuleResponse * const q);

    void parseDeleteResolverRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteResolverRuleResponse)
    Q_DISABLE_COPY(DeleteResolverRuleResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
