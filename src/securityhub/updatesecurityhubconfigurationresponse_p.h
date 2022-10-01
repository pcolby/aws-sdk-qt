// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESECURITYHUBCONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATESECURITYHUBCONFIGURATIONRESPONSE_P_H

#include "securityhubresponse_p.h"

namespace QtAws {
namespace SecurityHub {

class UpdateSecurityHubConfigurationResponse;

class UpdateSecurityHubConfigurationResponsePrivate : public SecurityHubResponsePrivate {

public:

    explicit UpdateSecurityHubConfigurationResponsePrivate(UpdateSecurityHubConfigurationResponse * const q);

    void parseUpdateSecurityHubConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSecurityHubConfigurationResponse)
    Q_DISABLE_COPY(UpdateSecurityHubConfigurationResponsePrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
