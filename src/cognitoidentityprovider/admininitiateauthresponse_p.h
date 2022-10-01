// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMININITIATEAUTHRESPONSE_P_H
#define QTAWS_ADMININITIATEAUTHRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminInitiateAuthResponse;

class AdminInitiateAuthResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit AdminInitiateAuthResponsePrivate(AdminInitiateAuthResponse * const q);

    void parseAdminInitiateAuthResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AdminInitiateAuthResponse)
    Q_DISABLE_COPY(AdminInitiateAuthResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
