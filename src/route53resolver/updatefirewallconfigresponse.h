// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIREWALLCONFIGRESPONSE_H
#define QTAWS_UPDATEFIREWALLCONFIGRESPONSE_H

#include "route53resolverresponse.h"
#include "updatefirewallconfigrequest.h"

namespace QtAws {
namespace Route53Resolver {

class UpdateFirewallConfigResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT UpdateFirewallConfigResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    UpdateFirewallConfigResponse(const UpdateFirewallConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFirewallConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFirewallConfigResponse)
    Q_DISABLE_COPY(UpdateFirewallConfigResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
