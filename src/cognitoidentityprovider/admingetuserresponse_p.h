// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINGETUSERRESPONSE_P_H
#define QTAWS_ADMINGETUSERRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminGetUserResponse;

class AdminGetUserResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit AdminGetUserResponsePrivate(AdminGetUserResponse * const q);

    void parseAdminGetUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AdminGetUserResponse)
    Q_DISABLE_COPY(AdminGetUserResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
