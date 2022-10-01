// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERDNSSECCONFIGREQUEST_P_H
#define QTAWS_GETRESOLVERDNSSECCONFIGREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "getresolverdnssecconfigrequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetResolverDnssecConfigRequest;

class GetResolverDnssecConfigRequestPrivate : public Route53ResolverRequestPrivate {

public:
    GetResolverDnssecConfigRequestPrivate(const Route53ResolverRequest::Action action,
                                   GetResolverDnssecConfigRequest * const q);
    GetResolverDnssecConfigRequestPrivate(const GetResolverDnssecConfigRequestPrivate &other,
                                   GetResolverDnssecConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetResolverDnssecConfigRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
