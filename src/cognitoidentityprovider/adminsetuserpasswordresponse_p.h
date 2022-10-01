// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINSETUSERPASSWORDRESPONSE_P_H
#define QTAWS_ADMINSETUSERPASSWORDRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminSetUserPasswordResponse;

class AdminSetUserPasswordResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit AdminSetUserPasswordResponsePrivate(AdminSetUserPasswordResponse * const q);

    void parseAdminSetUserPasswordResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AdminSetUserPasswordResponse)
    Q_DISABLE_COPY(AdminSetUserPasswordResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
