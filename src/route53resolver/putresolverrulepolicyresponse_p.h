// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRESOLVERRULEPOLICYRESPONSE_P_H
#define QTAWS_PUTRESOLVERRULEPOLICYRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class PutResolverRulePolicyResponse;

class PutResolverRulePolicyResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit PutResolverRulePolicyResponsePrivate(PutResolverRulePolicyResponse * const q);

    void parsePutResolverRulePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutResolverRulePolicyResponse)
    Q_DISABLE_COPY(PutResolverRulePolicyResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
