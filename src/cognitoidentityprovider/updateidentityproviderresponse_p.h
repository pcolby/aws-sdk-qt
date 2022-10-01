// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIDENTITYPROVIDERRESPONSE_P_H
#define QTAWS_UPDATEIDENTITYPROVIDERRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class UpdateIdentityProviderResponse;

class UpdateIdentityProviderResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit UpdateIdentityProviderResponsePrivate(UpdateIdentityProviderResponse * const q);

    void parseUpdateIdentityProviderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateIdentityProviderResponse)
    Q_DISABLE_COPY(UpdateIdentityProviderResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
