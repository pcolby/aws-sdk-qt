// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATERESOLVERENDPOINTIPADDRESSRESPONSE_H
#define QTAWS_ASSOCIATERESOLVERENDPOINTIPADDRESSRESPONSE_H

#include "route53resolverresponse.h"
#include "associateresolverendpointipaddressrequest.h"

namespace QtAws {
namespace Route53Resolver {

class AssociateResolverEndpointIpAddressResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT AssociateResolverEndpointIpAddressResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    AssociateResolverEndpointIpAddressResponse(const AssociateResolverEndpointIpAddressRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateResolverEndpointIpAddressRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateResolverEndpointIpAddressResponse)
    Q_DISABLE_COPY(AssociateResolverEndpointIpAddressResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
