// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERQUERYLOGCONFIGASSOCIATIONSREQUEST_P_H
#define QTAWS_LISTRESOLVERQUERYLOGCONFIGASSOCIATIONSREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "listresolverquerylogconfigassociationsrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListResolverQueryLogConfigAssociationsRequest;

class ListResolverQueryLogConfigAssociationsRequestPrivate : public Route53ResolverRequestPrivate {

public:
    ListResolverQueryLogConfigAssociationsRequestPrivate(const Route53ResolverRequest::Action action,
                                   ListResolverQueryLogConfigAssociationsRequest * const q);
    ListResolverQueryLogConfigAssociationsRequestPrivate(const ListResolverQueryLogConfigAssociationsRequestPrivate &other,
                                   ListResolverQueryLogConfigAssociationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListResolverQueryLogConfigAssociationsRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
