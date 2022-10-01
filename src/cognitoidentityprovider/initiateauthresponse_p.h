// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIATEAUTHRESPONSE_P_H
#define QTAWS_INITIATEAUTHRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class InitiateAuthResponse;

class InitiateAuthResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit InitiateAuthResponsePrivate(InitiateAuthResponse * const q);

    void parseInitiateAuthResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(InitiateAuthResponse)
    Q_DISABLE_COPY(InitiateAuthResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
