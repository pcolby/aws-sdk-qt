// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERRULEREQUEST_P_H
#define QTAWS_GETRESOLVERRULEREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "getresolverrulerequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetResolverRuleRequest;

class GetResolverRuleRequestPrivate : public Route53ResolverRequestPrivate {

public:
    GetResolverRuleRequestPrivate(const Route53ResolverRequest::Action action,
                                   GetResolverRuleRequest * const q);
    GetResolverRuleRequestPrivate(const GetResolverRuleRequestPrivate &other,
                                   GetResolverRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetResolverRuleRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
