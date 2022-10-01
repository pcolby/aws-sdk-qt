// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOLVERRULERESPONSE_H
#define QTAWS_DELETERESOLVERRULERESPONSE_H

#include "route53resolverresponse.h"
#include "deleteresolverrulerequest.h"

namespace QtAws {
namespace Route53Resolver {

class DeleteResolverRuleResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT DeleteResolverRuleResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    DeleteResolverRuleResponse(const DeleteResolverRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteResolverRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResolverRuleResponse)
    Q_DISABLE_COPY(DeleteResolverRuleResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
