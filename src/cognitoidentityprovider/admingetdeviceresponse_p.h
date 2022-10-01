// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINGETDEVICERESPONSE_P_H
#define QTAWS_ADMINGETDEVICERESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminGetDeviceResponse;

class AdminGetDeviceResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit AdminGetDeviceResponsePrivate(AdminGetDeviceResponse * const q);

    void parseAdminGetDeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AdminGetDeviceResponse)
    Q_DISABLE_COPY(AdminGetDeviceResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
