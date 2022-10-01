// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERRULEPOLICYREQUEST_P_H
#define QTAWS_GETRESOLVERRULEPOLICYREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "getresolverrulepolicyrequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetResolverRulePolicyRequest;

class GetResolverRulePolicyRequestPrivate : public Route53ResolverRequestPrivate {

public:
    GetResolverRulePolicyRequestPrivate(const Route53ResolverRequest::Action action,
                                   GetResolverRulePolicyRequest * const q);
    GetResolverRulePolicyRequestPrivate(const GetResolverRulePolicyRequestPrivate &other,
                                   GetResolverRulePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetResolverRulePolicyRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
