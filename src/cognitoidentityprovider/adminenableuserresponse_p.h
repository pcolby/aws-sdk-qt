// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINENABLEUSERRESPONSE_P_H
#define QTAWS_ADMINENABLEUSERRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminEnableUserResponse;

class AdminEnableUserResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit AdminEnableUserResponsePrivate(AdminEnableUserResponse * const q);

    void parseAdminEnableUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AdminEnableUserResponse)
    Q_DISABLE_COPY(AdminEnableUserResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
