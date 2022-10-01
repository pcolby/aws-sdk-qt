// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINRESPONDTOAUTHCHALLENGERESPONSE_P_H
#define QTAWS_ADMINRESPONDTOAUTHCHALLENGERESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminRespondToAuthChallengeResponse;

class AdminRespondToAuthChallengeResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit AdminRespondToAuthChallengeResponsePrivate(AdminRespondToAuthChallengeResponse * const q);

    void parseAdminRespondToAuthChallengeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AdminRespondToAuthChallengeResponse)
    Q_DISABLE_COPY(AdminRespondToAuthChallengeResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
