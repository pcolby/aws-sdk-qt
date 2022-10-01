// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINDELETEUSERATTRIBUTESRESPONSE_P_H
#define QTAWS_ADMINDELETEUSERATTRIBUTESRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminDeleteUserAttributesResponse;

class AdminDeleteUserAttributesResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit AdminDeleteUserAttributesResponsePrivate(AdminDeleteUserAttributesResponse * const q);

    void parseAdminDeleteUserAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AdminDeleteUserAttributesResponse)
    Q_DISABLE_COPY(AdminDeleteUserAttributesResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
