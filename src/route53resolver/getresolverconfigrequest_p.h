// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERCONFIGREQUEST_P_H
#define QTAWS_GETRESOLVERCONFIGREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "getresolverconfigrequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetResolverConfigRequest;

class GetResolverConfigRequestPrivate : public Route53ResolverRequestPrivate {

public:
    GetResolverConfigRequestPrivate(const Route53ResolverRequest::Action action,
                                   GetResolverConfigRequest * const q);
    GetResolverConfigRequestPrivate(const GetResolverConfigRequestPrivate &other,
                                   GetResolverConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetResolverConfigRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
