// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOLVERQUERYLOGCONFIGREQUEST_H
#define QTAWS_CREATERESOLVERQUERYLOGCONFIGREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class CreateResolverQueryLogConfigRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT CreateResolverQueryLogConfigRequest : public Route53ResolverRequest {

public:
    CreateResolverQueryLogConfigRequest(const CreateResolverQueryLogConfigRequest &other);
    CreateResolverQueryLogConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateResolverQueryLogConfigRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
