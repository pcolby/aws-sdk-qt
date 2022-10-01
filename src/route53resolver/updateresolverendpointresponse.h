// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOLVERENDPOINTRESPONSE_H
#define QTAWS_UPDATERESOLVERENDPOINTRESPONSE_H

#include "route53resolverresponse.h"
#include "updateresolverendpointrequest.h"

namespace QtAws {
namespace Route53Resolver {

class UpdateResolverEndpointResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT UpdateResolverEndpointResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    UpdateResolverEndpointResponse(const UpdateResolverEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateResolverEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateResolverEndpointResponse)
    Q_DISABLE_COPY(UpdateResolverEndpointResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
