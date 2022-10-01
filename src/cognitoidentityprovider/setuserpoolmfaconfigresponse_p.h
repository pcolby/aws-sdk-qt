// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETUSERPOOLMFACONFIGRESPONSE_P_H
#define QTAWS_SETUSERPOOLMFACONFIGRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class SetUserPoolMfaConfigResponse;

class SetUserPoolMfaConfigResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit SetUserPoolMfaConfigResponsePrivate(SetUserPoolMfaConfigResponse * const q);

    void parseSetUserPoolMfaConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetUserPoolMfaConfigResponse)
    Q_DISABLE_COPY(SetUserPoolMfaConfigResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
