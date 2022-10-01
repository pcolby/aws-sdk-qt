// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOLVERQUERYLOGCONFIGREQUEST_P_H
#define QTAWS_CREATERESOLVERQUERYLOGCONFIGREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "createresolverquerylogconfigrequest.h"

namespace QtAws {
namespace Route53Resolver {

class CreateResolverQueryLogConfigRequest;

class CreateResolverQueryLogConfigRequestPrivate : public Route53ResolverRequestPrivate {

public:
    CreateResolverQueryLogConfigRequestPrivate(const Route53ResolverRequest::Action action,
                                   CreateResolverQueryLogConfigRequest * const q);
    CreateResolverQueryLogConfigRequestPrivate(const CreateResolverQueryLogConfigRequestPrivate &other,
                                   CreateResolverQueryLogConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateResolverQueryLogConfigRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
