// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETUSERSETTINGSRESPONSE_P_H
#define QTAWS_SETUSERSETTINGSRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class SetUserSettingsResponse;

class SetUserSettingsResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit SetUserSettingsResponsePrivate(SetUserSettingsResponse * const q);

    void parseSetUserSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetUserSettingsResponse)
    Q_DISABLE_COPY(SetUserSettingsResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
