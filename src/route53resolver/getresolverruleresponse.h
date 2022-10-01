// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERRULERESPONSE_H
#define QTAWS_GETRESOLVERRULERESPONSE_H

#include "route53resolverresponse.h"
#include "getresolverrulerequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetResolverRuleResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT GetResolverRuleResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    GetResolverRuleResponse(const GetResolverRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetResolverRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResolverRuleResponse)
    Q_DISABLE_COPY(GetResolverRuleResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
