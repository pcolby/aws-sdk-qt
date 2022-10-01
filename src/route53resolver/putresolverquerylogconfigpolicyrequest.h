// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRESOLVERQUERYLOGCONFIGPOLICYREQUEST_H
#define QTAWS_PUTRESOLVERQUERYLOGCONFIGPOLICYREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class PutResolverQueryLogConfigPolicyRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT PutResolverQueryLogConfigPolicyRequest : public Route53ResolverRequest {

public:
    PutResolverQueryLogConfigPolicyRequest(const PutResolverQueryLogConfigPolicyRequest &other);
    PutResolverQueryLogConfigPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutResolverQueryLogConfigPolicyRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
