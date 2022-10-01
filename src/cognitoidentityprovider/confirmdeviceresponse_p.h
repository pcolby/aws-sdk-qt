// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMDEVICERESPONSE_P_H
#define QTAWS_CONFIRMDEVICERESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ConfirmDeviceResponse;

class ConfirmDeviceResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit ConfirmDeviceResponsePrivate(ConfirmDeviceResponse * const q);

    void parseConfirmDeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ConfirmDeviceResponse)
    Q_DISABLE_COPY(ConfirmDeviceResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
