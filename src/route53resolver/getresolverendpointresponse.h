// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERENDPOINTRESPONSE_H
#define QTAWS_GETRESOLVERENDPOINTRESPONSE_H

#include "route53resolverresponse.h"
#include "getresolverendpointrequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetResolverEndpointResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT GetResolverEndpointResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    GetResolverEndpointResponse(const GetResolverEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetResolverEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResolverEndpointResponse)
    Q_DISABLE_COPY(GetResolverEndpointResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
