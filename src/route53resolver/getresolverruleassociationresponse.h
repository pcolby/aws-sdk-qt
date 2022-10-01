// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERRULEASSOCIATIONRESPONSE_H
#define QTAWS_GETRESOLVERRULEASSOCIATIONRESPONSE_H

#include "route53resolverresponse.h"
#include "getresolverruleassociationrequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetResolverRuleAssociationResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT GetResolverRuleAssociationResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    GetResolverRuleAssociationResponse(const GetResolverRuleAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetResolverRuleAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResolverRuleAssociationResponse)
    Q_DISABLE_COPY(GetResolverRuleAssociationResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
