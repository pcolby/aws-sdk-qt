// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATERESOLVERQUERYLOGCONFIGREQUEST_P_H
#define QTAWS_DISASSOCIATERESOLVERQUERYLOGCONFIGREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "disassociateresolverquerylogconfigrequest.h"

namespace QtAws {
namespace Route53Resolver {

class DisassociateResolverQueryLogConfigRequest;

class DisassociateResolverQueryLogConfigRequestPrivate : public Route53ResolverRequestPrivate {

public:
    DisassociateResolverQueryLogConfigRequestPrivate(const Route53ResolverRequest::Action action,
                                   DisassociateResolverQueryLogConfigRequest * const q);
    DisassociateResolverQueryLogConfigRequestPrivate(const DisassociateResolverQueryLogConfigRequestPrivate &other,
                                   DisassociateResolverQueryLogConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateResolverQueryLogConfigRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
