// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERULEGROUPRESPONSE_H
#define QTAWS_UPDATERULEGROUPRESPONSE_H

#include "networkfirewallresponse.h"
#include "updaterulegrouprequest.h"

namespace QtAws {
namespace NetworkFirewall {

class UpdateRuleGroupResponsePrivate;

class QTAWSNETWORKFIREWALL_EXPORT UpdateRuleGroupResponse : public NetworkFirewallResponse {
    Q_OBJECT

public:
    UpdateRuleGroupResponse(const UpdateRuleGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRuleGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRuleGroupResponse)
    Q_DISABLE_COPY(UpdateRuleGroupResponse)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
