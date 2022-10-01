// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOLVERENDPOINTRESPONSE_H
#define QTAWS_DELETERESOLVERENDPOINTRESPONSE_H

#include "route53resolverresponse.h"
#include "deleteresolverendpointrequest.h"

namespace QtAws {
namespace Route53Resolver {

class DeleteResolverEndpointResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT DeleteResolverEndpointResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    DeleteResolverEndpointResponse(const DeleteResolverEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteResolverEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResolverEndpointResponse)
    Q_DISABLE_COPY(DeleteResolverEndpointResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
