// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERPOOLDOMAINRESPONSE_P_H
#define QTAWS_DELETEUSERPOOLDOMAINRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DeleteUserPoolDomainResponse;

class DeleteUserPoolDomainResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit DeleteUserPoolDomainResponsePrivate(DeleteUserPoolDomainResponse * const q);

    void parseDeleteUserPoolDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteUserPoolDomainResponse)
    Q_DISABLE_COPY(DeleteUserPoolDomainResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
