// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOGGINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATELOGGINGCONFIGURATIONRESPONSE_P_H

#include "networkfirewallresponse_p.h"

namespace QtAws {
namespace NetworkFirewall {

class UpdateLoggingConfigurationResponse;

class UpdateLoggingConfigurationResponsePrivate : public NetworkFirewallResponsePrivate {

public:

    explicit UpdateLoggingConfigurationResponsePrivate(UpdateLoggingConfigurationResponse * const q);

    void parseUpdateLoggingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateLoggingConfigurationResponse)
    Q_DISABLE_COPY(UpdateLoggingConfigurationResponsePrivate)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
