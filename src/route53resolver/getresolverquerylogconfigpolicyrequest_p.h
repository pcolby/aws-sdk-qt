// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERQUERYLOGCONFIGPOLICYREQUEST_P_H
#define QTAWS_GETRESOLVERQUERYLOGCONFIGPOLICYREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "getresolverquerylogconfigpolicyrequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetResolverQueryLogConfigPolicyRequest;

class GetResolverQueryLogConfigPolicyRequestPrivate : public Route53ResolverRequestPrivate {

public:
    GetResolverQueryLogConfigPolicyRequestPrivate(const Route53ResolverRequest::Action action,
                                   GetResolverQueryLogConfigPolicyRequest * const q);
    GetResolverQueryLogConfigPolicyRequestPrivate(const GetResolverQueryLogConfigPolicyRequestPrivate &other,
                                   GetResolverQueryLogConfigPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetResolverQueryLogConfigPolicyRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
