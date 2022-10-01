// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERRULEASSOCIATIONSRESPONSE_H
#define QTAWS_LISTRESOLVERRULEASSOCIATIONSRESPONSE_H

#include "route53resolverresponse.h"
#include "listresolverruleassociationsrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListResolverRuleAssociationsResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT ListResolverRuleAssociationsResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    ListResolverRuleAssociationsResponse(const ListResolverRuleAssociationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListResolverRuleAssociationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResolverRuleAssociationsResponse)
    Q_DISABLE_COPY(ListResolverRuleAssociationsResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
