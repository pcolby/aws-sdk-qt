// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATERESOLVERRULERESPONSE_H
#define QTAWS_DISASSOCIATERESOLVERRULERESPONSE_H

#include "route53resolverresponse.h"
#include "disassociateresolverrulerequest.h"

namespace QtAws {
namespace Route53Resolver {

class DisassociateResolverRuleResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT DisassociateResolverRuleResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    DisassociateResolverRuleResponse(const DisassociateResolverRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateResolverRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateResolverRuleResponse)
    Q_DISABLE_COPY(DisassociateResolverRuleResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
