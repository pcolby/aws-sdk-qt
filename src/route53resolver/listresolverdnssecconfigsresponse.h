// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERDNSSECCONFIGSRESPONSE_H
#define QTAWS_LISTRESOLVERDNSSECCONFIGSRESPONSE_H

#include "route53resolverresponse.h"
#include "listresolverdnssecconfigsrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListResolverDnssecConfigsResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT ListResolverDnssecConfigsResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    ListResolverDnssecConfigsResponse(const ListResolverDnssecConfigsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListResolverDnssecConfigsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResolverDnssecConfigsResponse)
    Q_DISABLE_COPY(ListResolverDnssecConfigsResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
