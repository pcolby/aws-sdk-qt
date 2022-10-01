// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERPOOLCLIENTRESPONSE_P_H
#define QTAWS_UPDATEUSERPOOLCLIENTRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class UpdateUserPoolClientResponse;

class UpdateUserPoolClientResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit UpdateUserPoolClientResponsePrivate(UpdateUserPoolClientResponse * const q);

    void parseUpdateUserPoolClientResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateUserPoolClientResponse)
    Q_DISABLE_COPY(UpdateUserPoolClientResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
