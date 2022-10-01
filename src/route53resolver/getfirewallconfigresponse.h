// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFIREWALLCONFIGRESPONSE_H
#define QTAWS_GETFIREWALLCONFIGRESPONSE_H

#include "route53resolverresponse.h"
#include "getfirewallconfigrequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetFirewallConfigResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT GetFirewallConfigResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    GetFirewallConfigResponse(const GetFirewallConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFirewallConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFirewallConfigResponse)
    Q_DISABLE_COPY(GetFirewallConfigResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
