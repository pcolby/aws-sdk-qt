// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERULEGROUPREQUEST_H
#define QTAWS_UPDATERULEGROUPREQUEST_H

#include "networkfirewallrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class UpdateRuleGroupRequestPrivate;

class QTAWSNETWORKFIREWALL_EXPORT UpdateRuleGroupRequest : public NetworkFirewallRequest {

public:
    UpdateRuleGroupRequest(const UpdateRuleGroupRequest &other);
    UpdateRuleGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRuleGroupRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
