// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOLVERENDPOINTREQUEST_H
#define QTAWS_CREATERESOLVERENDPOINTREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class CreateResolverEndpointRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT CreateResolverEndpointRequest : public Route53ResolverRequest {

public:
    CreateResolverEndpointRequest(const CreateResolverEndpointRequest &other);
    CreateResolverEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateResolverEndpointRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
