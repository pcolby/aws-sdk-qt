// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPRINCIPALTAGATTRIBUTEMAPRESPONSE_P_H
#define QTAWS_GETPRINCIPALTAGATTRIBUTEMAPRESPONSE_P_H

#include "cognitoidentityresponse_p.h"

namespace QtAws {
namespace CognitoIdentity {

class GetPrincipalTagAttributeMapResponse;

class GetPrincipalTagAttributeMapResponsePrivate : public CognitoIdentityResponsePrivate {

public:

    explicit GetPrincipalTagAttributeMapResponsePrivate(GetPrincipalTagAttributeMapResponse * const q);

    void parseGetPrincipalTagAttributeMapResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPrincipalTagAttributeMapResponse)
    Q_DISABLE_COPY(GetPrincipalTagAttributeMapResponsePrivate)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
