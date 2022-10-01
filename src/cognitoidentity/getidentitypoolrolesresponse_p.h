// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYPOOLROLESRESPONSE_P_H
#define QTAWS_GETIDENTITYPOOLROLESRESPONSE_P_H

#include "cognitoidentityresponse_p.h"

namespace QtAws {
namespace CognitoIdentity {

class GetIdentityPoolRolesResponse;

class GetIdentityPoolRolesResponsePrivate : public CognitoIdentityResponsePrivate {

public:

    explicit GetIdentityPoolRolesResponsePrivate(GetIdentityPoolRolesResponse * const q);

    void parseGetIdentityPoolRolesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetIdentityPoolRolesResponse)
    Q_DISABLE_COPY(GetIdentityPoolRolesResponsePrivate)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
