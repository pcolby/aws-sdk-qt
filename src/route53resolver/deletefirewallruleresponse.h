// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFIREWALLRULERESPONSE_H
#define QTAWS_DELETEFIREWALLRULERESPONSE_H

#include "route53resolverresponse.h"
#include "deletefirewallrulerequest.h"

namespace QtAws {
namespace Route53Resolver {

class DeleteFirewallRuleResponsePrivate;

class QTAWSROUTE53RESOLVER_EXPORT DeleteFirewallRuleResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    DeleteFirewallRuleResponse(const DeleteFirewallRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFirewallRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFirewallRuleResponse)
    Q_DISABLE_COPY(DeleteFirewallRuleResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
