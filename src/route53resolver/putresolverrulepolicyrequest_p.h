// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRESOLVERRULEPOLICYREQUEST_P_H
#define QTAWS_PUTRESOLVERRULEPOLICYREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "putresolverrulepolicyrequest.h"

namespace QtAws {
namespace Route53Resolver {

class PutResolverRulePolicyRequest;

class PutResolverRulePolicyRequestPrivate : public Route53ResolverRequestPrivate {

public:
    PutResolverRulePolicyRequestPrivate(const Route53ResolverRequest::Action action,
                                   PutResolverRulePolicyRequest * const q);
    PutResolverRulePolicyRequestPrivate(const PutResolverRulePolicyRequestPrivate &other,
                                   PutResolverRulePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutResolverRulePolicyRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
