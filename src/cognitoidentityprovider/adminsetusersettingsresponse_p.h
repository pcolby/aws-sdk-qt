// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINSETUSERSETTINGSRESPONSE_P_H
#define QTAWS_ADMINSETUSERSETTINGSRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminSetUserSettingsResponse;

class AdminSetUserSettingsResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit AdminSetUserSettingsResponsePrivate(AdminSetUserSettingsResponse * const q);

    void parseAdminSetUserSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AdminSetUserSettingsResponse)
    Q_DISABLE_COPY(AdminSetUserSettingsResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
