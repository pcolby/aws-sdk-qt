// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATERESOLVERRULEREQUEST_P_H
#define QTAWS_ASSOCIATERESOLVERRULEREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "associateresolverrulerequest.h"

namespace QtAws {
namespace Route53Resolver {

class AssociateResolverRuleRequest;

class AssociateResolverRuleRequestPrivate : public Route53ResolverRequestPrivate {

public:
    AssociateResolverRuleRequestPrivate(const Route53ResolverRequest::Action action,
                                   AssociateResolverRuleRequest * const q);
    AssociateResolverRuleRequestPrivate(const AssociateResolverRuleRequestPrivate &other,
                                   AssociateResolverRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateResolverRuleRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
