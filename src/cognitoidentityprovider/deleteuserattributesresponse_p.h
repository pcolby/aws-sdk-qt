// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERATTRIBUTESRESPONSE_P_H
#define QTAWS_DELETEUSERATTRIBUTESRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DeleteUserAttributesResponse;

class DeleteUserAttributesResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit DeleteUserAttributesResponsePrivate(DeleteUserAttributesResponse * const q);

    void parseDeleteUserAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteUserAttributesResponse)
    Q_DISABLE_COPY(DeleteUserAttributesResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
