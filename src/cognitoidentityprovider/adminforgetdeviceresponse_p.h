// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINFORGETDEVICERESPONSE_P_H
#define QTAWS_ADMINFORGETDEVICERESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminForgetDeviceResponse;

class AdminForgetDeviceResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit AdminForgetDeviceResponsePrivate(AdminForgetDeviceResponse * const q);

    void parseAdminForgetDeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AdminForgetDeviceResponse)
    Q_DISABLE_COPY(AdminForgetDeviceResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
