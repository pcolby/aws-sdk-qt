// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOLVERRULEREQUEST_P_H
#define QTAWS_DELETERESOLVERRULEREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "deleteresolverrulerequest.h"

namespace QtAws {
namespace Route53Resolver {

class DeleteResolverRuleRequest;

class DeleteResolverRuleRequestPrivate : public Route53ResolverRequestPrivate {

public:
    DeleteResolverRuleRequestPrivate(const Route53ResolverRequest::Action action,
                                   DeleteResolverRuleRequest * const q);
    DeleteResolverRuleRequestPrivate(const DeleteResolverRuleRequestPrivate &other,
                                   DeleteResolverRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteResolverRuleRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
