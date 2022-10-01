// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFIREWALLDOMAINLISTRESPONSE_H
#define QTAWS_GETFIREWALLDOMAINLISTRESPONSE_H

#include "route53resolverresponse.h"
#include "getfirewalldomainlistrequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetFirewallDomainListResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT GetFirewallDomainListResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    GetFirewallDomainListResponse(const GetFirewallDomainListRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFirewallDomainListRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFirewallDomainListResponse)
    Q_DISABLE_COPY(GetFirewallDomainListResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
