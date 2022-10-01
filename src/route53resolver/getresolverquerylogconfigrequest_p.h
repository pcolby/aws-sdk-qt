// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERQUERYLOGCONFIGREQUEST_P_H
#define QTAWS_GETRESOLVERQUERYLOGCONFIGREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "getresolverquerylogconfigrequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetResolverQueryLogConfigRequest;

class GetResolverQueryLogConfigRequestPrivate : public Route53ResolverRequestPrivate {

public:
    GetResolverQueryLogConfigRequestPrivate(const Route53ResolverRequest::Action action,
                                   GetResolverQueryLogConfigRequest * const q);
    GetResolverQueryLogConfigRequestPrivate(const GetResolverQueryLogConfigRequestPrivate &other,
                                   GetResolverQueryLogConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetResolverQueryLogConfigRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
