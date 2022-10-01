// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERRULESREQUEST_H
#define QTAWS_LISTRESOLVERRULESREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListResolverRulesRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT ListResolverRulesRequest : public Route53ResolverRequest {

public:
    ListResolverRulesRequest(const ListResolverRulesRequest &other);
    ListResolverRulesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResolverRulesRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
