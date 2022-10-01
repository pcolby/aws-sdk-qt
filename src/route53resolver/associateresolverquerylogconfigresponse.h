// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATERESOLVERQUERYLOGCONFIGRESPONSE_H
#define QTAWS_ASSOCIATERESOLVERQUERYLOGCONFIGRESPONSE_H

#include "route53resolverresponse.h"
#include "associateresolverquerylogconfigrequest.h"

namespace QtAws {
namespace Route53Resolver {

class AssociateResolverQueryLogConfigResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT AssociateResolverQueryLogConfigResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    AssociateResolverQueryLogConfigResponse(const AssociateResolverQueryLogConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateResolverQueryLogConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateResolverQueryLogConfigResponse)
    Q_DISABLE_COPY(AssociateResolverQueryLogConfigResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
