// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEORGANIZATIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATEORGANIZATIONCONFIGURATIONRESPONSE_P_H

#include "securityhubresponse_p.h"

namespace QtAws {
namespace SecurityHub {

class UpdateOrganizationConfigurationResponse;

class UpdateOrganizationConfigurationResponsePrivate : public SecurityHubResponsePrivate {

public:

    explicit UpdateOrganizationConfigurationResponsePrivate(UpdateOrganizationConfigurationResponse * const q);

    void parseUpdateOrganizationConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateOrganizationConfigurationResponse)
    Q_DISABLE_COPY(UpdateOrganizationConfigurationResponsePrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
