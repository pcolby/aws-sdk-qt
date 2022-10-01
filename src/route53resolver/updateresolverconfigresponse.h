// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOLVERCONFIGRESPONSE_H
#define QTAWS_UPDATERESOLVERCONFIGRESPONSE_H

#include "route53resolverresponse.h"
#include "updateresolverconfigrequest.h"

namespace QtAws {
namespace Route53Resolver {

class UpdateResolverConfigResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT UpdateResolverConfigResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    UpdateResolverConfigResponse(const UpdateResolverConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateResolverConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateResolverConfigResponse)
    Q_DISABLE_COPY(UpdateResolverConfigResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
