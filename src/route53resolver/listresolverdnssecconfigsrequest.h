// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERDNSSECCONFIGSREQUEST_H
#define QTAWS_LISTRESOLVERDNSSECCONFIGSREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListResolverDnssecConfigsRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT ListResolverDnssecConfigsRequest : public Route53ResolverRequest {

public:
    ListResolverDnssecConfigsRequest(const ListResolverDnssecConfigsRequest &other);
    ListResolverDnssecConfigsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResolverDnssecConfigsRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
