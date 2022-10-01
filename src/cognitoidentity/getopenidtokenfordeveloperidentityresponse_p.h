// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPENIDTOKENFORDEVELOPERIDENTITYRESPONSE_P_H
#define QTAWS_GETOPENIDTOKENFORDEVELOPERIDENTITYRESPONSE_P_H

#include "cognitoidentityresponse_p.h"

namespace QtAws {
namespace CognitoIdentity {

class GetOpenIdTokenForDeveloperIdentityResponse;

class GetOpenIdTokenForDeveloperIdentityResponsePrivate : public CognitoIdentityResponsePrivate {

public:

    explicit GetOpenIdTokenForDeveloperIdentityResponsePrivate(GetOpenIdTokenForDeveloperIdentityResponse * const q);

    void parseGetOpenIdTokenForDeveloperIdentityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetOpenIdTokenForDeveloperIdentityResponse)
    Q_DISABLE_COPY(GetOpenIdTokenForDeveloperIdentityResponsePrivate)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
