// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOLVERENDPOINTREQUEST_H
#define QTAWS_DELETERESOLVERENDPOINTREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class DeleteResolverEndpointRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT DeleteResolverEndpointRequest : public Route53ResolverRequest {

public:
    DeleteResolverEndpointRequest(const DeleteResolverEndpointRequest &other);
    DeleteResolverEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResolverEndpointRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
