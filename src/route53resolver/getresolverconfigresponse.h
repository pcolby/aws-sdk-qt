// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERCONFIGRESPONSE_H
#define QTAWS_GETRESOLVERCONFIGRESPONSE_H

#include "route53resolverresponse.h"
#include "getresolverconfigrequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetResolverConfigResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT GetResolverConfigResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    GetResolverConfigResponse(const GetResolverConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetResolverConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResolverConfigResponse)
    Q_DISABLE_COPY(GetResolverConfigResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
