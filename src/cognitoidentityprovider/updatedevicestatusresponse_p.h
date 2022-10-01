// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICESTATUSRESPONSE_P_H
#define QTAWS_UPDATEDEVICESTATUSRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class UpdateDeviceStatusResponse;

class UpdateDeviceStatusResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit UpdateDeviceStatusResponsePrivate(UpdateDeviceStatusResponse * const q);

    void parseUpdateDeviceStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDeviceStatusResponse)
    Q_DISABLE_COPY(UpdateDeviceStatusResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
