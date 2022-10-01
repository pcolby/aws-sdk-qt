// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKETOKENRESPONSE_P_H
#define QTAWS_REVOKETOKENRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class RevokeTokenResponse;

class RevokeTokenResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit RevokeTokenResponsePrivate(RevokeTokenResponse * const q);

    void parseRevokeTokenResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RevokeTokenResponse)
    Q_DISABLE_COPY(RevokeTokenResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
