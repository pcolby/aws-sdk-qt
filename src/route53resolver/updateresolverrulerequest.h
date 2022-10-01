// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOLVERRULEREQUEST_H
#define QTAWS_UPDATERESOLVERRULEREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class UpdateResolverRuleRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT UpdateResolverRuleRequest : public Route53ResolverRequest {

public:
    UpdateResolverRuleRequest(const UpdateResolverRuleRequest &other);
    UpdateResolverRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateResolverRuleRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
