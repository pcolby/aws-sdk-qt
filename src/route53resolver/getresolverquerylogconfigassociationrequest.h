// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERQUERYLOGCONFIGASSOCIATIONREQUEST_H
#define QTAWS_GETRESOLVERQUERYLOGCONFIGASSOCIATIONREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetResolverQueryLogConfigAssociationRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT GetResolverQueryLogConfigAssociationRequest : public Route53ResolverRequest {

public:
    GetResolverQueryLogConfigAssociationRequest(const GetResolverQueryLogConfigAssociationRequest &other);
    GetResolverQueryLogConfigAssociationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResolverQueryLogConfigAssociationRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
