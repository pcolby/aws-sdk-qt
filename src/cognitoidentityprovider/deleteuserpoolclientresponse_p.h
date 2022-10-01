// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERPOOLCLIENTRESPONSE_P_H
#define QTAWS_DELETEUSERPOOLCLIENTRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DeleteUserPoolClientResponse;

class DeleteUserPoolClientResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit DeleteUserPoolClientResponsePrivate(DeleteUserPoolClientResponse * const q);

    void parseDeleteUserPoolClientResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteUserPoolClientResponse)
    Q_DISABLE_COPY(DeleteUserPoolClientResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
