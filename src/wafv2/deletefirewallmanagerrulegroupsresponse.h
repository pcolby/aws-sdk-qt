// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFIREWALLMANAGERRULEGROUPSRESPONSE_H
#define QTAWS_DELETEFIREWALLMANAGERRULEGROUPSRESPONSE_H

#include "wafv2response.h"
#include "deletefirewallmanagerrulegroupsrequest.h"

namespace QtAws {
namespace Wafv2 {

class DeleteFirewallManagerRuleGroupsResponsePrivate;

class QTAWSWAFV2_EXPORT DeleteFirewallManagerRuleGroupsResponse : public Wafv2Response {
    Q_OBJECT

public:
    DeleteFirewallManagerRuleGroupsResponse(const DeleteFirewallManagerRuleGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFirewallManagerRuleGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFirewallManagerRuleGroupsResponse)
    Q_DISABLE_COPY(DeleteFirewallManagerRuleGroupsResponse)

};

} // namespace Wafv2
} // namespace QtAws

#endif
