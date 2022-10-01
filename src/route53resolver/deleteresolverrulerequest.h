// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOLVERRULEREQUEST_H
#define QTAWS_DELETERESOLVERRULEREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class DeleteResolverRuleRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT DeleteResolverRuleRequest : public Route53ResolverRequest {

public:
    DeleteResolverRuleRequest(const DeleteResolverRuleRequest &other);
    DeleteResolverRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResolverRuleRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
