// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOGGINGCONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATELOGGINGCONFIGURATIONREQUEST_P_H

#include "networkfirewallrequest_p.h"
#include "updateloggingconfigurationrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class UpdateLoggingConfigurationRequest;

class UpdateLoggingConfigurationRequestPrivate : public NetworkFirewallRequestPrivate {

public:
    UpdateLoggingConfigurationRequestPrivate(const NetworkFirewallRequest::Action action,
                                   UpdateLoggingConfigurationRequest * const q);
    UpdateLoggingConfigurationRequestPrivate(const UpdateLoggingConfigurationRequestPrivate &other,
                                   UpdateLoggingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateLoggingConfigurationRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
