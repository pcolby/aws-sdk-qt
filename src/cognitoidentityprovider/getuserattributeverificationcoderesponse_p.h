// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERATTRIBUTEVERIFICATIONCODERESPONSE_P_H
#define QTAWS_GETUSERATTRIBUTEVERIFICATIONCODERESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class GetUserAttributeVerificationCodeResponse;

class GetUserAttributeVerificationCodeResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit GetUserAttributeVerificationCodeResponsePrivate(GetUserAttributeVerificationCodeResponse * const q);

    void parseGetUserAttributeVerificationCodeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetUserAttributeVerificationCodeResponse)
    Q_DISABLE_COPY(GetUserAttributeVerificationCodeResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
