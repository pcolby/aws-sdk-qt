// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERDNSSECCONFIGRESPONSE_H
#define QTAWS_GETRESOLVERDNSSECCONFIGRESPONSE_H

#include "route53resolverresponse.h"
#include "getresolverdnssecconfigrequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetResolverDnssecConfigResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT GetResolverDnssecConfigResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    GetResolverDnssecConfigResponse(const GetResolverDnssecConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetResolverDnssecConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResolverDnssecConfigResponse)
    Q_DISABLE_COPY(GetResolverDnssecConfigResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
