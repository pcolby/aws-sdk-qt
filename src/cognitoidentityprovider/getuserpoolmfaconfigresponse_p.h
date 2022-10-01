// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERPOOLMFACONFIGRESPONSE_P_H
#define QTAWS_GETUSERPOOLMFACONFIGRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class GetUserPoolMfaConfigResponse;

class GetUserPoolMfaConfigResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit GetUserPoolMfaConfigResponsePrivate(GetUserPoolMfaConfigResponse * const q);

    void parseGetUserPoolMfaConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetUserPoolMfaConfigResponse)
    Q_DISABLE_COPY(GetUserPoolMfaConfigResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
