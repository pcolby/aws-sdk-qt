// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERCONFIGREQUEST_H
#define QTAWS_GETRESOLVERCONFIGREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetResolverConfigRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT GetResolverConfigRequest : public Route53ResolverRequest {

public:
    GetResolverConfigRequest(const GetResolverConfigRequest &other);
    GetResolverConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResolverConfigRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
