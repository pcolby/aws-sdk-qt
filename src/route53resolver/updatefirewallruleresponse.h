// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIREWALLRULERESPONSE_H
#define QTAWS_UPDATEFIREWALLRULERESPONSE_H

#include "route53resolverresponse.h"
#include "updatefirewallrulerequest.h"

namespace QtAws {
namespace Route53Resolver {

class UpdateFirewallRuleResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT UpdateFirewallRuleResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    UpdateFirewallRuleResponse(const UpdateFirewallRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFirewallRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFirewallRuleResponse)
    Q_DISABLE_COPY(UpdateFirewallRuleResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
