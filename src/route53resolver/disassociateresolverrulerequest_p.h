// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATERESOLVERRULEREQUEST_P_H
#define QTAWS_DISASSOCIATERESOLVERRULEREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "disassociateresolverrulerequest.h"

namespace QtAws {
namespace Route53Resolver {

class DisassociateResolverRuleRequest;

class DisassociateResolverRuleRequestPrivate : public Route53ResolverRequestPrivate {

public:
    DisassociateResolverRuleRequestPrivate(const Route53ResolverRequest::Action action,
                                   DisassociateResolverRuleRequest * const q);
    DisassociateResolverRuleRequestPrivate(const DisassociateResolverRuleRequestPrivate &other,
                                   DisassociateResolverRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateResolverRuleRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
