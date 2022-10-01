// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERQUERYLOGCONFIGASSOCIATIONSREQUEST_H
#define QTAWS_LISTRESOLVERQUERYLOGCONFIGASSOCIATIONSREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListResolverQueryLogConfigAssociationsRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT ListResolverQueryLogConfigAssociationsRequest : public Route53ResolverRequest {

public:
    ListResolverQueryLogConfigAssociationsRequest(const ListResolverQueryLogConfigAssociationsRequest &other);
    ListResolverQueryLogConfigAssociationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResolverQueryLogConfigAssociationsRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
