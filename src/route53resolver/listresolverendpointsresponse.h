// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERENDPOINTSRESPONSE_H
#define QTAWS_LISTRESOLVERENDPOINTSRESPONSE_H

#include "route53resolverresponse.h"
#include "listresolverendpointsrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListResolverEndpointsResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT ListResolverEndpointsResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    ListResolverEndpointsResponse(const ListResolverEndpointsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListResolverEndpointsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResolverEndpointsResponse)
    Q_DISABLE_COPY(ListResolverEndpointsResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
