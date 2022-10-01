// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FORGOTPASSWORDRESPONSE_P_H
#define QTAWS_FORGOTPASSWORDRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ForgotPasswordResponse;

class ForgotPasswordResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit ForgotPasswordResponsePrivate(ForgotPasswordResponse * const q);

    void parseForgotPasswordResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ForgotPasswordResponse)
    Q_DISABLE_COPY(ForgotPasswordResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
