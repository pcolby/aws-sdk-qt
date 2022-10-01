// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOLVERRULEREQUEST_H
#define QTAWS_CREATERESOLVERRULEREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class CreateResolverRuleRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT CreateResolverRuleRequest : public Route53ResolverRequest {

public:
    CreateResolverRuleRequest(const CreateResolverRuleRequest &other);
    CreateResolverRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateResolverRuleRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
