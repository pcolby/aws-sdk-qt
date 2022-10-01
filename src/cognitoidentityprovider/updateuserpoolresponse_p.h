// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERPOOLRESPONSE_P_H
#define QTAWS_UPDATEUSERPOOLRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class UpdateUserPoolResponse;

class UpdateUserPoolResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit UpdateUserPoolResponsePrivate(UpdateUserPoolResponse * const q);

    void parseUpdateUserPoolResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateUserPoolResponse)
    Q_DISABLE_COPY(UpdateUserPoolResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
