// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRESOLVERQUERYLOGCONFIGPOLICYREQUEST_P_H
#define QTAWS_PUTRESOLVERQUERYLOGCONFIGPOLICYREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "putresolverquerylogconfigpolicyrequest.h"

namespace QtAws {
namespace Route53Resolver {

class PutResolverQueryLogConfigPolicyRequest;

class PutResolverQueryLogConfigPolicyRequestPrivate : public Route53ResolverRequestPrivate {

public:
    PutResolverQueryLogConfigPolicyRequestPrivate(const Route53ResolverRequest::Action action,
                                   PutResolverQueryLogConfigPolicyRequest * const q);
    PutResolverQueryLogConfigPolicyRequestPrivate(const PutResolverQueryLogConfigPolicyRequestPrivate &other,
                                   PutResolverQueryLogConfigPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutResolverQueryLogConfigPolicyRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
