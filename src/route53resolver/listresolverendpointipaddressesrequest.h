// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERENDPOINTIPADDRESSESREQUEST_H
#define QTAWS_LISTRESOLVERENDPOINTIPADDRESSESREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListResolverEndpointIpAddressesRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT ListResolverEndpointIpAddressesRequest : public Route53ResolverRequest {

public:
    ListResolverEndpointIpAddressesRequest(const ListResolverEndpointIpAddressesRequest &other);
    ListResolverEndpointIpAddressesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResolverEndpointIpAddressesRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
