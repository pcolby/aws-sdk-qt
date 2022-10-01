// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERDNSSECCONFIGSREQUEST_P_H
#define QTAWS_LISTRESOLVERDNSSECCONFIGSREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "listresolverdnssecconfigsrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListResolverDnssecConfigsRequest;

class ListResolverDnssecConfigsRequestPrivate : public Route53ResolverRequestPrivate {

public:
    ListResolverDnssecConfigsRequestPrivate(const Route53ResolverRequest::Action action,
                                   ListResolverDnssecConfigsRequest * const q);
    ListResolverDnssecConfigsRequestPrivate(const ListResolverDnssecConfigsRequestPrivate &other,
                                   ListResolverDnssecConfigsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListResolverDnssecConfigsRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
