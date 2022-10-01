// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOLVERRULERESPONSE_H
#define QTAWS_CREATERESOLVERRULERESPONSE_H

#include "route53resolverresponse.h"
#include "createresolverrulerequest.h"

namespace QtAws {
namespace Route53Resolver {

class CreateResolverRuleResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT CreateResolverRuleResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    CreateResolverRuleResponse(const CreateResolverRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateResolverRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateResolverRuleResponse)
    Q_DISABLE_COPY(CreateResolverRuleResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
