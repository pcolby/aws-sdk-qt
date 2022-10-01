// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINDISABLEUSERRESPONSE_P_H
#define QTAWS_ADMINDISABLEUSERRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminDisableUserResponse;

class AdminDisableUserResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit AdminDisableUserResponsePrivate(AdminDisableUserResponse * const q);

    void parseAdminDisableUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AdminDisableUserResponse)
    Q_DISABLE_COPY(AdminDisableUserResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
