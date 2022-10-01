// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFIREWALLRULERESPONSE_H
#define QTAWS_CREATEFIREWALLRULERESPONSE_H

#include "route53resolverresponse.h"
#include "createfirewallrulerequest.h"

namespace QtAws {
namespace Route53Resolver {

class CreateFirewallRuleResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT CreateFirewallRuleResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    CreateFirewallRuleResponse(const CreateFirewallRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFirewallRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFirewallRuleResponse)
    Q_DISABLE_COPY(CreateFirewallRuleResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
