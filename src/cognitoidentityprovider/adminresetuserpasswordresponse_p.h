// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINRESETUSERPASSWORDRESPONSE_P_H
#define QTAWS_ADMINRESETUSERPASSWORDRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminResetUserPasswordResponse;

class AdminResetUserPasswordResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit AdminResetUserPasswordResponsePrivate(AdminResetUserPasswordResponse * const q);

    void parseAdminResetUserPasswordResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AdminResetUserPasswordResponse)
    Q_DISABLE_COPY(AdminResetUserPasswordResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
