// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPENIDTOKENRESPONSE_P_H
#define QTAWS_GETOPENIDTOKENRESPONSE_P_H

#include "cognitoidentityresponse_p.h"

namespace QtAws {
namespace CognitoIdentity {

class GetOpenIdTokenResponse;

class GetOpenIdTokenResponsePrivate : public CognitoIdentityResponsePrivate {

public:

    explicit GetOpenIdTokenResponsePrivate(GetOpenIdTokenResponse * const q);

    void parseGetOpenIdTokenResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetOpenIdTokenResponse)
    Q_DISABLE_COPY(GetOpenIdTokenResponsePrivate)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
