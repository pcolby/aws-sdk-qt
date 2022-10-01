// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIDENTITYPROVIDERRESPONSE_P_H
#define QTAWS_CREATEIDENTITYPROVIDERRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class CreateIdentityProviderResponse;

class CreateIdentityProviderResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit CreateIdentityProviderResponsePrivate(CreateIdentityProviderResponse * const q);

    void parseCreateIdentityProviderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateIdentityProviderResponse)
    Q_DISABLE_COPY(CreateIdentityProviderResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
