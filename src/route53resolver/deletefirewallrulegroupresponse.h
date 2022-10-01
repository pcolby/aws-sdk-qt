// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFIREWALLRULEGROUPRESPONSE_H
#define QTAWS_DELETEFIREWALLRULEGROUPRESPONSE_H

#include "route53resolverresponse.h"
#include "deletefirewallrulegrouprequest.h"

namespace QtAws {
namespace Route53Resolver {

class DeleteFirewallRuleGroupResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT DeleteFirewallRuleGroupResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    DeleteFirewallRuleGroupResponse(const DeleteFirewallRuleGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFirewallRuleGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFirewallRuleGroupResponse)
    Q_DISABLE_COPY(DeleteFirewallRuleGroupResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
