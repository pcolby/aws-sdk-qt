// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOLVERQUERYLOGCONFIGREQUEST_P_H
#define QTAWS_DELETERESOLVERQUERYLOGCONFIGREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "deleteresolverquerylogconfigrequest.h"

namespace QtAws {
namespace Route53Resolver {

class DeleteResolverQueryLogConfigRequest;

class DeleteResolverQueryLogConfigRequestPrivate : public Route53ResolverRequestPrivate {

public:
    DeleteResolverQueryLogConfigRequestPrivate(const Route53ResolverRequest::Action action,
                                   DeleteResolverQueryLogConfigRequest * const q);
    DeleteResolverQueryLogConfigRequestPrivate(const DeleteResolverQueryLogConfigRequestPrivate &other,
                                   DeleteResolverQueryLogConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteResolverQueryLogConfigRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
