// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETIDENTITYPOOLROLESRESPONSE_P_H
#define QTAWS_SETIDENTITYPOOLROLESRESPONSE_P_H

#include "cognitoidentityresponse_p.h"

namespace QtAws {
namespace CognitoIdentity {

class SetIdentityPoolRolesResponse;

class SetIdentityPoolRolesResponsePrivate : public CognitoIdentityResponsePrivate {

public:

    explicit SetIdentityPoolRolesResponsePrivate(SetIdentityPoolRolesResponse * const q);

    void parseSetIdentityPoolRolesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetIdentityPoolRolesResponse)
    Q_DISABLE_COPY(SetIdentityPoolRolesResponsePrivate)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
