// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERCONFIGSREQUEST_P_H
#define QTAWS_LISTRESOLVERCONFIGSREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "listresolverconfigsrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListResolverConfigsRequest;

class ListResolverConfigsRequestPrivate : public Route53ResolverRequestPrivate {

public:
    ListResolverConfigsRequestPrivate(const Route53ResolverRequest::Action action,
                                   ListResolverConfigsRequest * const q);
    ListResolverConfigsRequestPrivate(const ListResolverConfigsRequestPrivate &other,
                                   ListResolverConfigsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListResolverConfigsRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
