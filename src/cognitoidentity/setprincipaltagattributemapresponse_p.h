// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETPRINCIPALTAGATTRIBUTEMAPRESPONSE_P_H
#define QTAWS_SETPRINCIPALTAGATTRIBUTEMAPRESPONSE_P_H

#include "cognitoidentityresponse_p.h"

namespace QtAws {
namespace CognitoIdentity {

class SetPrincipalTagAttributeMapResponse;

class SetPrincipalTagAttributeMapResponsePrivate : public CognitoIdentityResponsePrivate {

public:

    explicit SetPrincipalTagAttributeMapResponsePrivate(SetPrincipalTagAttributeMapResponse * const q);

    void parseSetPrincipalTagAttributeMapResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetPrincipalTagAttributeMapResponse)
    Q_DISABLE_COPY(SetPrincipalTagAttributeMapResponsePrivate)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
