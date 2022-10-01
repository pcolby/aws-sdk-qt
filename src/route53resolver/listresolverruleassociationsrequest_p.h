// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERRULEASSOCIATIONSREQUEST_P_H
#define QTAWS_LISTRESOLVERRULEASSOCIATIONSREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "listresolverruleassociationsrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListResolverRuleAssociationsRequest;

class ListResolverRuleAssociationsRequestPrivate : public Route53ResolverRequestPrivate {

public:
    ListResolverRuleAssociationsRequestPrivate(const Route53ResolverRequest::Action action,
                                   ListResolverRuleAssociationsRequest * const q);
    ListResolverRuleAssociationsRequestPrivate(const ListResolverRuleAssociationsRequestPrivate &other,
                                   ListResolverRuleAssociationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListResolverRuleAssociationsRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
