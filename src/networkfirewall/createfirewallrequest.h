// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFIREWALLREQUEST_H
#define QTAWS_CREATEFIREWALLREQUEST_H

#include "networkfirewallrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class CreateFirewallRequestPrivate;

class QTAWSNETWORKFIREWALL_EXPORT CreateFirewallRequest : public NetworkFirewallRequest {

public:
    CreateFirewallRequest(const CreateFirewallRequest &other);
    CreateFirewallRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFirewallRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
