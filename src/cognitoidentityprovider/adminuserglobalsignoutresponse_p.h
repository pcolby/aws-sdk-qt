// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINUSERGLOBALSIGNOUTRESPONSE_P_H
#define QTAWS_ADMINUSERGLOBALSIGNOUTRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminUserGlobalSignOutResponse;

class AdminUserGlobalSignOutResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit AdminUserGlobalSignOutResponsePrivate(AdminUserGlobalSignOutResponse * const q);

    void parseAdminUserGlobalSignOutResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AdminUserGlobalSignOutResponse)
    Q_DISABLE_COPY(AdminUserGlobalSignOutResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
