// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATERESOLVERQUERYLOGCONFIGREQUEST_P_H
#define QTAWS_ASSOCIATERESOLVERQUERYLOGCONFIGREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "associateresolverquerylogconfigrequest.h"

namespace QtAws {
namespace Route53Resolver {

class AssociateResolverQueryLogConfigRequest;

class AssociateResolverQueryLogConfigRequestPrivate : public Route53ResolverRequestPrivate {

public:
    AssociateResolverQueryLogConfigRequestPrivate(const Route53ResolverRequest::Action action,
                                   AssociateResolverQueryLogConfigRequest * const q);
    AssociateResolverQueryLogConfigRequestPrivate(const AssociateResolverQueryLogConfigRequestPrivate &other,
                                   AssociateResolverQueryLogConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateResolverQueryLogConfigRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
