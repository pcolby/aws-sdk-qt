// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATERESOLVERRULERESPONSE_H
#define QTAWS_ASSOCIATERESOLVERRULERESPONSE_H

#include "route53resolverresponse.h"
#include "associateresolverrulerequest.h"

namespace QtAws {
namespace Route53Resolver {

class AssociateResolverRuleResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT AssociateResolverRuleResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    AssociateResolverRuleResponse(const AssociateResolverRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateResolverRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateResolverRuleResponse)
    Q_DISABLE_COPY(AssociateResolverRuleResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
