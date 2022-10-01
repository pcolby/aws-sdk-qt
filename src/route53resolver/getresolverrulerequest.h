// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERRULEREQUEST_H
#define QTAWS_GETRESOLVERRULEREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetResolverRuleRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT GetResolverRuleRequest : public Route53ResolverRequest {

public:
    GetResolverRuleRequest(const GetResolverRuleRequest &other);
    GetResolverRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResolverRuleRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
