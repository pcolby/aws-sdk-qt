// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESUBNETCHANGEPROTECTIONREQUEST_P_H
#define QTAWS_UPDATESUBNETCHANGEPROTECTIONREQUEST_P_H

#include "networkfirewallrequest_p.h"
#include "updatesubnetchangeprotectionrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class UpdateSubnetChangeProtectionRequest;

class UpdateSubnetChangeProtectionRequestPrivate : public NetworkFirewallRequestPrivate {

public:
    UpdateSubnetChangeProtectionRequestPrivate(const NetworkFirewallRequest::Action action,
                                   UpdateSubnetChangeProtectionRequest * const q);
    UpdateSubnetChangeProtectionRequestPrivate(const UpdateSubnetChangeProtectionRequestPrivate &other,
                                   UpdateSubnetChangeProtectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSubnetChangeProtectionRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
