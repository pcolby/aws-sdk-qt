// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATERESOLVERQUERYLOGCONFIGREQUEST_H
#define QTAWS_ASSOCIATERESOLVERQUERYLOGCONFIGREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class AssociateResolverQueryLogConfigRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT AssociateResolverQueryLogConfigRequest : public Route53ResolverRequest {

public:
    AssociateResolverQueryLogConfigRequest(const AssociateResolverQueryLogConfigRequest &other);
    AssociateResolverQueryLogConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateResolverQueryLogConfigRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
