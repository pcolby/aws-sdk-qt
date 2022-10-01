// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINUPDATEUSERATTRIBUTESRESPONSE_P_H
#define QTAWS_ADMINUPDATEUSERATTRIBUTESRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminUpdateUserAttributesResponse;

class AdminUpdateUserAttributesResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit AdminUpdateUserAttributesResponsePrivate(AdminUpdateUserAttributesResponse * const q);

    void parseAdminUpdateUserAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AdminUpdateUserAttributesResponse)
    Q_DISABLE_COPY(AdminUpdateUserAttributesResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
