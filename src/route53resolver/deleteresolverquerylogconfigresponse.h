// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOLVERQUERYLOGCONFIGRESPONSE_H
#define QTAWS_DELETERESOLVERQUERYLOGCONFIGRESPONSE_H

#include "route53resolverresponse.h"
#include "deleteresolverquerylogconfigrequest.h"

namespace QtAws {
namespace Route53Resolver {

class DeleteResolverQueryLogConfigResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT DeleteResolverQueryLogConfigResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    DeleteResolverQueryLogConfigResponse(const DeleteResolverQueryLogConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteResolverQueryLogConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResolverQueryLogConfigResponse)
    Q_DISABLE_COPY(DeleteResolverQueryLogConfigResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
