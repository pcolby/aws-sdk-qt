// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOLVERCONFIGREQUEST_H
#define QTAWS_UPDATERESOLVERCONFIGREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class UpdateResolverConfigRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT UpdateResolverConfigRequest : public Route53ResolverRequest {

public:
    UpdateResolverConfigRequest(const UpdateResolverConfigRequest &other);
    UpdateResolverConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateResolverConfigRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
