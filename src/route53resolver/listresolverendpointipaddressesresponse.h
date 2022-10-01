// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERENDPOINTIPADDRESSESRESPONSE_H
#define QTAWS_LISTRESOLVERENDPOINTIPADDRESSESRESPONSE_H

#include "route53resolverresponse.h"
#include "listresolverendpointipaddressesrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListResolverEndpointIpAddressesResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT ListResolverEndpointIpAddressesResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    ListResolverEndpointIpAddressesResponse(const ListResolverEndpointIpAddressesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListResolverEndpointIpAddressesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResolverEndpointIpAddressesResponse)
    Q_DISABLE_COPY(ListResolverEndpointIpAddressesResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
