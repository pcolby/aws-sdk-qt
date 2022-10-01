// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERQUERYLOGCONFIGREQUEST_H
#define QTAWS_GETRESOLVERQUERYLOGCONFIGREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetResolverQueryLogConfigRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT GetResolverQueryLogConfigRequest : public Route53ResolverRequest {

public:
    GetResolverQueryLogConfigRequest(const GetResolverQueryLogConfigRequest &other);
    GetResolverQueryLogConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResolverQueryLogConfigRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
