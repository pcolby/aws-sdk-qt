// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFIREWALLDOMAINLISTRESPONSE_H
#define QTAWS_DELETEFIREWALLDOMAINLISTRESPONSE_H

#include "route53resolverresponse.h"
#include "deletefirewalldomainlistrequest.h"

namespace QtAws {
namespace Route53Resolver {

class DeleteFirewallDomainListResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT DeleteFirewallDomainListResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    DeleteFirewallDomainListResponse(const DeleteFirewallDomainListRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFirewallDomainListRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFirewallDomainListResponse)
    Q_DISABLE_COPY(DeleteFirewallDomainListResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
