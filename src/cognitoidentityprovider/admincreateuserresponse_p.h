// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINCREATEUSERRESPONSE_P_H
#define QTAWS_ADMINCREATEUSERRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminCreateUserResponse;

class AdminCreateUserResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit AdminCreateUserResponsePrivate(AdminCreateUserResponse * const q);

    void parseAdminCreateUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AdminCreateUserResponse)
    Q_DISABLE_COPY(AdminCreateUserResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
