// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERCONFIGSRESPONSE_H
#define QTAWS_LISTRESOLVERCONFIGSRESPONSE_H

#include "route53resolverresponse.h"
#include "listresolverconfigsrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListResolverConfigsResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT ListResolverConfigsResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    ListResolverConfigsResponse(const ListResolverConfigsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListResolverConfigsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResolverConfigsResponse)
    Q_DISABLE_COPY(ListResolverConfigsResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
