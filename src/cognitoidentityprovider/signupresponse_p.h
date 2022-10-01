// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SIGNUPRESPONSE_P_H
#define QTAWS_SIGNUPRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class SignUpResponse;

class SignUpResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit SignUpResponsePrivate(SignUpResponse * const q);

    void parseSignUpResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SignUpResponse)
    Q_DISABLE_COPY(SignUpResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
