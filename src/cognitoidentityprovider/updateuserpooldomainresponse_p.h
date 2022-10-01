// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERPOOLDOMAINRESPONSE_P_H
#define QTAWS_UPDATEUSERPOOLDOMAINRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class UpdateUserPoolDomainResponse;

class UpdateUserPoolDomainResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit UpdateUserPoolDomainResponsePrivate(UpdateUserPoolDomainResponse * const q);

    void parseUpdateUserPoolDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateUserPoolDomainResponse)
    Q_DISABLE_COPY(UpdateUserPoolDomainResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
