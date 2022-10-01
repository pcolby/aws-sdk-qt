// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESENDCONFIRMATIONCODERESPONSE_P_H
#define QTAWS_RESENDCONFIRMATIONCODERESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ResendConfirmationCodeResponse;

class ResendConfirmationCodeResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit ResendConfirmationCodeResponsePrivate(ResendConfirmationCodeResponse * const q);

    void parseResendConfirmationCodeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResendConfirmationCodeResponse)
    Q_DISABLE_COPY(ResendConfirmationCodeResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
