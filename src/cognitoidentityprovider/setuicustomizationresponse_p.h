// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETUICUSTOMIZATIONRESPONSE_P_H
#define QTAWS_SETUICUSTOMIZATIONRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class SetUICustomizationResponse;

class SetUICustomizationResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit SetUICustomizationResponsePrivate(SetUICustomizationResponse * const q);

    void parseSetUICustomizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetUICustomizationResponse)
    Q_DISABLE_COPY(SetUICustomizationResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
