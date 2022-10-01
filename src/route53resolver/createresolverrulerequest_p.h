// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOLVERRULEREQUEST_P_H
#define QTAWS_CREATERESOLVERRULEREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "createresolverrulerequest.h"

namespace QtAws {
namespace Route53Resolver {

class CreateResolverRuleRequest;

class CreateResolverRuleRequestPrivate : public Route53ResolverRequestPrivate {

public:
    CreateResolverRuleRequestPrivate(const Route53ResolverRequest::Action action,
                                   CreateResolverRuleRequest * const q);
    CreateResolverRuleRequestPrivate(const CreateResolverRuleRequestPrivate &other,
                                   CreateResolverRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateResolverRuleRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
