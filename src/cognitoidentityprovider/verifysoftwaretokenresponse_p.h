// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYSOFTWARETOKENRESPONSE_P_H
#define QTAWS_VERIFYSOFTWARETOKENRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class VerifySoftwareTokenResponse;

class VerifySoftwareTokenResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit VerifySoftwareTokenResponsePrivate(VerifySoftwareTokenResponse * const q);

    void parseVerifySoftwareTokenResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(VerifySoftwareTokenResponse)
    Q_DISABLE_COPY(VerifySoftwareTokenResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
