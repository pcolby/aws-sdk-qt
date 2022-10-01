// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOLVERRULEREQUEST_P_H
#define QTAWS_UPDATERESOLVERRULEREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "updateresolverrulerequest.h"

namespace QtAws {
namespace Route53Resolver {

class UpdateResolverRuleRequest;

class UpdateResolverRuleRequestPrivate : public Route53ResolverRequestPrivate {

public:
    UpdateResolverRuleRequestPrivate(const Route53ResolverRequest::Action action,
                                   UpdateResolverRuleRequest * const q);
    UpdateResolverRuleRequestPrivate(const UpdateResolverRuleRequestPrivate &other,
                                   UpdateResolverRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateResolverRuleRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
