// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERRULESREQUEST_P_H
#define QTAWS_LISTRESOLVERRULESREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "listresolverrulesrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListResolverRulesRequest;

class ListResolverRulesRequestPrivate : public Route53ResolverRequestPrivate {

public:
    ListResolverRulesRequestPrivate(const Route53ResolverRequest::Action action,
                                   ListResolverRulesRequest * const q);
    ListResolverRulesRequestPrivate(const ListResolverRulesRequestPrivate &other,
                                   ListResolverRulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListResolverRulesRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
