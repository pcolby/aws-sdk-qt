// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMSIGNUPRESPONSE_P_H
#define QTAWS_CONFIRMSIGNUPRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ConfirmSignUpResponse;

class ConfirmSignUpResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit ConfirmSignUpResponsePrivate(ConfirmSignUpResponse * const q);

    void parseConfirmSignUpResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ConfirmSignUpResponse)
    Q_DISABLE_COPY(ConfirmSignUpResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
