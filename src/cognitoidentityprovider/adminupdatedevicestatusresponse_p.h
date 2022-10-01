// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINUPDATEDEVICESTATUSRESPONSE_P_H
#define QTAWS_ADMINUPDATEDEVICESTATUSRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminUpdateDeviceStatusResponse;

class AdminUpdateDeviceStatusResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit AdminUpdateDeviceStatusResponsePrivate(AdminUpdateDeviceStatusResponse * const q);

    void parseAdminUpdateDeviceStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AdminUpdateDeviceStatusResponse)
    Q_DISABLE_COPY(AdminUpdateDeviceStatusResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
