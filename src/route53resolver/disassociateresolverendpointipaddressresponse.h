// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATERESOLVERENDPOINTIPADDRESSRESPONSE_H
#define QTAWS_DISASSOCIATERESOLVERENDPOINTIPADDRESSRESPONSE_H

#include "route53resolverresponse.h"
#include "disassociateresolverendpointipaddressrequest.h"

namespace QtAws {
namespace Route53Resolver {

class DisassociateResolverEndpointIpAddressResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT DisassociateResolverEndpointIpAddressResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    DisassociateResolverEndpointIpAddressResponse(const DisassociateResolverEndpointIpAddressRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateResolverEndpointIpAddressRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateResolverEndpointIpAddressResponse)
    Q_DISABLE_COPY(DisassociateResolverEndpointIpAddressResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
