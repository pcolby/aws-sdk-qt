// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFIREWALLRULEGROUPRESPONSE_H
#define QTAWS_CREATEFIREWALLRULEGROUPRESPONSE_H

#include "route53resolverresponse.h"
#include "createfirewallrulegrouprequest.h"

namespace QtAws {
namespace Route53Resolver {

class CreateFirewallRuleGroupResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT CreateFirewallRuleGroupResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    CreateFirewallRuleGroupResponse(const CreateFirewallRuleGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFirewallRuleGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFirewallRuleGroupResponse)
    Q_DISABLE_COPY(CreateFirewallRuleGroupResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
