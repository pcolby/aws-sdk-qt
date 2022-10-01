// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMFORGOTPASSWORDRESPONSE_P_H
#define QTAWS_CONFIRMFORGOTPASSWORDRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ConfirmForgotPasswordResponse;

class ConfirmForgotPasswordResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit ConfirmForgotPasswordResponsePrivate(ConfirmForgotPasswordResponse * const q);

    void parseConfirmForgotPasswordResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ConfirmForgotPasswordResponse)
    Q_DISABLE_COPY(ConfirmForgotPasswordResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
