// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERCONFIGSREQUEST_H
#define QTAWS_LISTRESOLVERCONFIGSREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListResolverConfigsRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT ListResolverConfigsRequest : public Route53ResolverRequest {

public:
    ListResolverConfigsRequest(const ListResolverConfigsRequest &other);
    ListResolverConfigsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResolverConfigsRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
