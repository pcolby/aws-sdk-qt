// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERENDPOINTSREQUEST_H
#define QTAWS_LISTRESOLVERENDPOINTSREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListResolverEndpointsRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT ListResolverEndpointsRequest : public Route53ResolverRequest {

public:
    ListResolverEndpointsRequest(const ListResolverEndpointsRequest &other);
    ListResolverEndpointsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResolverEndpointsRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
