// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERRULEASSOCIATIONREQUEST_H
#define QTAWS_GETRESOLVERRULEASSOCIATIONREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetResolverRuleAssociationRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT GetResolverRuleAssociationRequest : public Route53ResolverRequest {

public:
    GetResolverRuleAssociationRequest(const GetResolverRuleAssociationRequest &other);
    GetResolverRuleAssociationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResolverRuleAssociationRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
