// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOGGINGCONFIGURATIONREQUEST_H
#define QTAWS_UPDATELOGGINGCONFIGURATIONREQUEST_H

#include "networkfirewallrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class UpdateLoggingConfigurationRequestPrivate;

class QTAWSNETWORKFIREWALL_EXPORT UpdateLoggingConfigurationRequest : public NetworkFirewallRequest {

public:
    UpdateLoggingConfigurationRequest(const UpdateLoggingConfigurationRequest &other);
    UpdateLoggingConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLoggingConfigurationRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
