// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERULEGROUPREQUEST_H
#define QTAWS_CREATERULEGROUPREQUEST_H

#include "networkfirewallrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class CreateRuleGroupRequestPrivate;

class QTAWSNETWORKFIREWALL_EXPORT CreateRuleGroupRequest : public NetworkFirewallRequest {

public:
    CreateRuleGroupRequest(const CreateRuleGroupRequest &other);
    CreateRuleGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRuleGroupRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
