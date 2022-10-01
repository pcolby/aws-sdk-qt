// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINDELETEUSERRESPONSE_P_H
#define QTAWS_ADMINDELETEUSERRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminDeleteUserResponse;

class AdminDeleteUserResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit AdminDeleteUserResponsePrivate(AdminDeleteUserResponse * const q);

    void parseAdminDeleteUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AdminDeleteUserResponse)
    Q_DISABLE_COPY(AdminDeleteUserResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
