// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIREWALLDESCRIPTIONREQUEST_H
#define QTAWS_UPDATEFIREWALLDESCRIPTIONREQUEST_H

#include "networkfirewallrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class UpdateFirewallDescriptionRequestPrivate;

class QTAWSNETWORKFIREWALL_EXPORT UpdateFirewallDescriptionRequest : public NetworkFirewallRequest {

public:
    UpdateFirewallDescriptionRequest(const UpdateFirewallDescriptionRequest &other);
    UpdateFirewallDescriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFirewallDescriptionRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
