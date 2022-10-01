// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDEVICEAUTHORIZATIONRESPONSE_P_H
#define QTAWS_STARTDEVICEAUTHORIZATIONRESPONSE_P_H

#include "ssooidcresponse_p.h"

namespace QtAws {
namespace SsoOidc {

class StartDeviceAuthorizationResponse;

class StartDeviceAuthorizationResponsePrivate : public SsoOidcResponsePrivate {

public:

    explicit StartDeviceAuthorizationResponsePrivate(StartDeviceAuthorizationResponse * const q);

    void parseStartDeviceAuthorizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartDeviceAuthorizationResponse)
    Q_DISABLE_COPY(StartDeviceAuthorizationResponsePrivate)

};

} // namespace SsoOidc
} // namespace QtAws

#endif
