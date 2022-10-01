// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESOFTWARETOKENRESPONSE_P_H
#define QTAWS_ASSOCIATESOFTWARETOKENRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AssociateSoftwareTokenResponse;

class AssociateSoftwareTokenResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit AssociateSoftwareTokenResponsePrivate(AssociateSoftwareTokenResponse * const q);

    void parseAssociateSoftwareTokenResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateSoftwareTokenResponse)
    Q_DISABLE_COPY(AssociateSoftwareTokenResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
