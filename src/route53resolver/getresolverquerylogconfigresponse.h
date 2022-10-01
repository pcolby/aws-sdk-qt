// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERQUERYLOGCONFIGRESPONSE_H
#define QTAWS_GETRESOLVERQUERYLOGCONFIGRESPONSE_H

#include "route53resolverresponse.h"
#include "getresolverquerylogconfigrequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetResolverQueryLogConfigResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT GetResolverQueryLogConfigResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    GetResolverQueryLogConfigResponse(const GetResolverQueryLogConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetResolverQueryLogConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResolverQueryLogConfigResponse)
    Q_DISABLE_COPY(GetResolverQueryLogConfigResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
