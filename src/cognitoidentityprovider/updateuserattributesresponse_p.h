// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERATTRIBUTESRESPONSE_P_H
#define QTAWS_UPDATEUSERATTRIBUTESRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class UpdateUserAttributesResponse;

class UpdateUserAttributesResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit UpdateUserAttributesResponsePrivate(UpdateUserAttributesResponse * const q);

    void parseUpdateUserAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateUserAttributesResponse)
    Q_DISABLE_COPY(UpdateUserAttributesResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
