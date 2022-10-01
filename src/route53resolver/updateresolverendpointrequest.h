// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOLVERENDPOINTREQUEST_H
#define QTAWS_UPDATERESOLVERENDPOINTREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class UpdateResolverEndpointRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT UpdateResolverEndpointRequest : public Route53ResolverRequest {

public:
    UpdateResolverEndpointRequest(const UpdateResolverEndpointRequest &other);
    UpdateResolverEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateResolverEndpointRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
