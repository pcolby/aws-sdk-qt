// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOLVERQUERYLOGCONFIGRESPONSE_H
#define QTAWS_CREATERESOLVERQUERYLOGCONFIGRESPONSE_H

#include "route53resolverresponse.h"
#include "createresolverquerylogconfigrequest.h"

namespace QtAws {
namespace Route53Resolver {

class CreateResolverQueryLogConfigResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT CreateResolverQueryLogConfigResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    CreateResolverQueryLogConfigResponse(const CreateResolverQueryLogConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateResolverQueryLogConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateResolverQueryLogConfigResponse)
    Q_DISABLE_COPY(CreateResolverQueryLogConfigResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
