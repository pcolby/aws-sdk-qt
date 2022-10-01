// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFIREWALLDOMAINLISTRESPONSE_H
#define QTAWS_CREATEFIREWALLDOMAINLISTRESPONSE_H

#include "route53resolverresponse.h"
#include "createfirewalldomainlistrequest.h"

namespace QtAws {
namespace Route53Resolver {

class CreateFirewallDomainListResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT CreateFirewallDomainListResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    CreateFirewallDomainListResponse(const CreateFirewallDomainListRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFirewallDomainListRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFirewallDomainListResponse)
    Q_DISABLE_COPY(CreateFirewallDomainListResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
