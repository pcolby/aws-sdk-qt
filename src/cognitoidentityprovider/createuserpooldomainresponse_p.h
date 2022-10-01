// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERPOOLDOMAINRESPONSE_P_H
#define QTAWS_CREATEUSERPOOLDOMAINRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class CreateUserPoolDomainResponse;

class CreateUserPoolDomainResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit CreateUserPoolDomainResponsePrivate(CreateUserPoolDomainResponse * const q);

    void parseCreateUserPoolDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateUserPoolDomainResponse)
    Q_DISABLE_COPY(CreateUserPoolDomainResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
