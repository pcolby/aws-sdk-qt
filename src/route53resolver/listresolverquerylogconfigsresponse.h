// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERQUERYLOGCONFIGSRESPONSE_H
#define QTAWS_LISTRESOLVERQUERYLOGCONFIGSRESPONSE_H

#include "route53resolverresponse.h"
#include "listresolverquerylogconfigsrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListResolverQueryLogConfigsResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT ListResolverQueryLogConfigsResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    ListResolverQueryLogConfigsResponse(const ListResolverQueryLogConfigsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListResolverQueryLogConfigsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResolverQueryLogConfigsResponse)
    Q_DISABLE_COPY(ListResolverQueryLogConfigsResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
