// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRESOLVERRULEPOLICYRESPONSE_H
#define QTAWS_PUTRESOLVERRULEPOLICYRESPONSE_H

#include "route53resolverresponse.h"
#include "putresolverrulepolicyrequest.h"

namespace QtAws {
namespace Route53Resolver {

class PutResolverRulePolicyResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT PutResolverRulePolicyResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    PutResolverRulePolicyResponse(const PutResolverRulePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutResolverRulePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutResolverRulePolicyResponse)
    Q_DISABLE_COPY(PutResolverRulePolicyResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
