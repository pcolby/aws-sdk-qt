// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERRULEASSOCIATIONREQUEST_P_H
#define QTAWS_GETRESOLVERRULEASSOCIATIONREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "getresolverruleassociationrequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetResolverRuleAssociationRequest;

class GetResolverRuleAssociationRequestPrivate : public Route53ResolverRequestPrivate {

public:
    GetResolverRuleAssociationRequestPrivate(const Route53ResolverRequest::Action action,
                                   GetResolverRuleAssociationRequest * const q);
    GetResolverRuleAssociationRequestPrivate(const GetResolverRuleAssociationRequestPrivate &other,
                                   GetResolverRuleAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetResolverRuleAssociationRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
