// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUICUSTOMIZATIONRESPONSE_P_H
#define QTAWS_GETUICUSTOMIZATIONRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class GetUICustomizationResponse;

class GetUICustomizationResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit GetUICustomizationResponsePrivate(GetUICustomizationResponse * const q);

    void parseGetUICustomizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetUICustomizationResponse)
    Q_DISABLE_COPY(GetUICustomizationResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
