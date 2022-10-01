// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINLINKPROVIDERFORUSERRESPONSE_P_H
#define QTAWS_ADMINLINKPROVIDERFORUSERRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminLinkProviderForUserResponse;

class AdminLinkProviderForUserResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit AdminLinkProviderForUserResponsePrivate(AdminLinkProviderForUserResponse * const q);

    void parseAdminLinkProviderForUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AdminLinkProviderForUserResponse)
    Q_DISABLE_COPY(AdminLinkProviderForUserResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
