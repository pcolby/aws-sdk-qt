// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERRULESRESPONSE_H
#define QTAWS_LISTRESOLVERRULESRESPONSE_H

#include "route53resolverresponse.h"
#include "listresolverrulesrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ListResolverRulesResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT ListResolverRulesResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    ListResolverRulesResponse(const ListResolverRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListResolverRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResolverRulesResponse)
    Q_DISABLE_COPY(ListResolverRulesResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
