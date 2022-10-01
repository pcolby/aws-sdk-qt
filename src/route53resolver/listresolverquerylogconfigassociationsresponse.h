// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERQUERYLOGCONFIGASSOCIATIONSRESPONSE_H
#define QTAWS_LISTRESOLVERQUERYLOGCONFIGASSOCIATIONSRESPONSE_H

#include "route53resolverresponse.h"
#include "listresolverquerylogconfigassociationsrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListResolverQueryLogConfigAssociationsResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT ListResolverQueryLogConfigAssociationsResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    ListResolverQueryLogConfigAssociationsResponse(const ListResolverQueryLogConfigAssociationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListResolverQueryLogConfigAssociationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResolverQueryLogConfigAssociationsResponse)
    Q_DISABLE_COPY(ListResolverQueryLogConfigAssociationsResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
