// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FORGETDEVICERESPONSE_P_H
#define QTAWS_FORGETDEVICERESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ForgetDeviceResponse;

class ForgetDeviceResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit ForgetDeviceResponsePrivate(ForgetDeviceResponse * const q);

    void parseForgetDeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ForgetDeviceResponse)
    Q_DISABLE_COPY(ForgetDeviceResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
