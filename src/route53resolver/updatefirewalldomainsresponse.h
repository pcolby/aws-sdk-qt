// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIREWALLDOMAINSRESPONSE_H
#define QTAWS_UPDATEFIREWALLDOMAINSRESPONSE_H

#include "route53resolverresponse.h"
#include "updatefirewalldomainsrequest.h"

namespace QtAws {
namespace Route53Resolver {

class UpdateFirewallDomainsResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT UpdateFirewallDomainsResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    UpdateFirewallDomainsResponse(const UpdateFirewallDomainsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFirewallDomainsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFirewallDomainsResponse)
    Q_DISABLE_COPY(UpdateFirewallDomainsResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
