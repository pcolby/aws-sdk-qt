// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERPOOLRESPONSE_P_H
#define QTAWS_CREATEUSERPOOLRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class CreateUserPoolResponse;

class CreateUserPoolResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit CreateUserPoolResponsePrivate(CreateUserPoolResponse * const q);

    void parseCreateUserPoolResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateUserPoolResponse)
    Q_DISABLE_COPY(CreateUserPoolResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
