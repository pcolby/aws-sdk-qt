// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINDISABLEPROVIDERFORUSERRESPONSE_P_H
#define QTAWS_ADMINDISABLEPROVIDERFORUSERRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminDisableProviderForUserResponse;

class AdminDisableProviderForUserResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit AdminDisableProviderForUserResponsePrivate(AdminDisableProviderForUserResponse * const q);

    void parseAdminDisableProviderForUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AdminDisableProviderForUserResponse)
    Q_DISABLE_COPY(AdminDisableProviderForUserResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
