// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINCONFIRMSIGNUPRESPONSE_P_H
#define QTAWS_ADMINCONFIRMSIGNUPRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminConfirmSignUpResponse;

class AdminConfirmSignUpResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit AdminConfirmSignUpResponsePrivate(AdminConfirmSignUpResponse * const q);

    void parseAdminConfirmSignUpResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AdminConfirmSignUpResponse)
    Q_DISABLE_COPY(AdminConfirmSignUpResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
