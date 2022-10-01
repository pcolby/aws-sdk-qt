// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERQUERYLOGCONFIGASSOCIATIONRESPONSE_H
#define QTAWS_GETRESOLVERQUERYLOGCONFIGASSOCIATIONRESPONSE_H

#include "route53resolverresponse.h"
#include "getresolverquerylogconfigassociationrequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetResolverQueryLogConfigAssociationResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT GetResolverQueryLogConfigAssociationResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    GetResolverQueryLogConfigAssociationResponse(const GetResolverQueryLogConfigAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetResolverQueryLogConfigAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResolverQueryLogConfigAssociationResponse)
    Q_DISABLE_COPY(GetResolverQueryLogConfigAssociationResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
