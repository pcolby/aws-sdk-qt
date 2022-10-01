// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERQUERYLOGCONFIGPOLICYREQUEST_H
#define QTAWS_GETRESOLVERQUERYLOGCONFIGPOLICYREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetResolverQueryLogConfigPolicyRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT GetResolverQueryLogConfigPolicyRequest : public Route53ResolverRequest {

public:
    GetResolverQueryLogConfigPolicyRequest(const GetResolverQueryLogConfigPolicyRequest &other);
    GetResolverQueryLogConfigPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResolverQueryLogConfigPolicyRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
