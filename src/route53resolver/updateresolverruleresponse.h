// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOLVERRULERESPONSE_H
#define QTAWS_UPDATERESOLVERRULERESPONSE_H

#include "route53resolverresponse.h"
#include "updateresolverrulerequest.h"

namespace QtAws {
namespace Route53Resolver {

class UpdateResolverRuleResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT UpdateResolverRuleResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    UpdateResolverRuleResponse(const UpdateResolverRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateResolverRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateResolverRuleResponse)
    Q_DISABLE_COPY(UpdateResolverRuleResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
