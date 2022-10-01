// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERRULEPOLICYRESPONSE_P_H
#define QTAWS_GETRESOLVERRULEPOLICYRESPONSE_P_H

#include "route53resolverresponse_p.h"

namespace QtAws {
namespace Route53Resolver {

class GetResolverRulePolicyResponse;

class GetResolverRulePolicyResponsePrivate : public Route53ResolverResponsePrivate {

public:

    explicit GetResolverRulePolicyResponsePrivate(GetResolverRulePolicyResponse * const q);

    void parseGetResolverRulePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetResolverRulePolicyResponse)
    Q_DISABLE_COPY(GetResolverRulePolicyResponsePrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
