// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYUSERATTRIBUTERESPONSE_P_H
#define QTAWS_VERIFYUSERATTRIBUTERESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class VerifyUserAttributeResponse;

class VerifyUserAttributeResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit VerifyUserAttributeResponsePrivate(VerifyUserAttributeResponse * const q);

    void parseVerifyUserAttributeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(VerifyUserAttributeResponse)
    Q_DISABLE_COPY(VerifyUserAttributeResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
