// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESPONDTOAUTHCHALLENGERESPONSE_P_H
#define QTAWS_RESPONDTOAUTHCHALLENGERESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class RespondToAuthChallengeResponse;

class RespondToAuthChallengeResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit RespondToAuthChallengeResponsePrivate(RespondToAuthChallengeResponse * const q);

    void parseRespondToAuthChallengeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RespondToAuthChallengeResponse)
    Q_DISABLE_COPY(RespondToAuthChallengeResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
