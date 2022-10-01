// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERRULEASSOCIATIONSREQUEST_H
#define QTAWS_LISTRESOLVERRULEASSOCIATIONSREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListResolverRuleAssociationsRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT ListResolverRuleAssociationsRequest : public Route53ResolverRequest {

public:
    ListResolverRuleAssociationsRequest(const ListResolverRuleAssociationsRequest &other);
    ListResolverRuleAssociationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResolverRuleAssociationsRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
