// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERQUERYLOGCONFIGASSOCIATIONREQUEST_P_H
#define QTAWS_GETRESOLVERQUERYLOGCONFIGASSOCIATIONREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "getresolverquerylogconfigassociationrequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetResolverQueryLogConfigAssociationRequest;

class GetResolverQueryLogConfigAssociationRequestPrivate : public Route53ResolverRequestPrivate {

public:
    GetResolverQueryLogConfigAssociationRequestPrivate(const Route53ResolverRequest::Action action,
                                   GetResolverQueryLogConfigAssociationRequest * const q);
    GetResolverQueryLogConfigAssociationRequestPrivate(const GetResolverQueryLogConfigAssociationRequestPrivate &other,
                                   GetResolverQueryLogConfigAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetResolverQueryLogConfigAssociationRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
