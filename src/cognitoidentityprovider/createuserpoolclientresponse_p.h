// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERPOOLCLIENTRESPONSE_P_H
#define QTAWS_CREATEUSERPOOLCLIENTRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class CreateUserPoolClientResponse;

class CreateUserPoolClientResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit CreateUserPoolClientResponsePrivate(CreateUserPoolClientResponse * const q);

    void parseCreateUserPoolClientResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateUserPoolClientResponse)
    Q_DISABLE_COPY(CreateUserPoolClientResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
