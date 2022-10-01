// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERPOOLRESPONSE_P_H
#define QTAWS_DELETEUSERPOOLRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DeleteUserPoolResponse;

class DeleteUserPoolResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit DeleteUserPoolResponsePrivate(DeleteUserPoolResponse * const q);

    void parseDeleteUserPoolResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteUserPoolResponse)
    Q_DISABLE_COPY(DeleteUserPoolResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
