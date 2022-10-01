// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERQUERYLOGCONFIGSREQUEST_P_H
#define QTAWS_LISTRESOLVERQUERYLOGCONFIGSREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "listresolverquerylogconfigsrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListResolverQueryLogConfigsRequest;

class ListResolverQueryLogConfigsRequestPrivate : public Route53ResolverRequestPrivate {

public:
    ListResolverQueryLogConfigsRequestPrivate(const Route53ResolverRequest::Action action,
                                   ListResolverQueryLogConfigsRequest * const q);
    ListResolverQueryLogConfigsRequestPrivate(const ListResolverQueryLogConfigsRequestPrivate &other,
                                   ListResolverQueryLogConfigsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListResolverQueryLogConfigsRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
