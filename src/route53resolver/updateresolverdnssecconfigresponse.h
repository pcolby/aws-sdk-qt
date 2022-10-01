// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOLVERDNSSECCONFIGRESPONSE_H
#define QTAWS_UPDATERESOLVERDNSSECCONFIGRESPONSE_H

#include "route53resolverresponse.h"
#include "updateresolverdnssecconfigrequest.h"

namespace QtAws {
namespace Route53Resolver {

class UpdateResolverDnssecConfigResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT UpdateResolverDnssecConfigResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    UpdateResolverDnssecConfigResponse(const UpdateResolverDnssecConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateResolverDnssecConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateResolverDnssecConfigResponse)
    Q_DISABLE_COPY(UpdateResolverDnssecConfigResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
