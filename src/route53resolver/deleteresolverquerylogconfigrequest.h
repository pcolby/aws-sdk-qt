// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOLVERQUERYLOGCONFIGREQUEST_H
#define QTAWS_DELETERESOLVERQUERYLOGCONFIGREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class DeleteResolverQueryLogConfigRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT DeleteResolverQueryLogConfigRequest : public Route53ResolverRequest {

public:
    DeleteResolverQueryLogConfigRequest(const DeleteResolverQueryLogConfigRequest &other);
    DeleteResolverQueryLogConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResolverQueryLogConfigRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
