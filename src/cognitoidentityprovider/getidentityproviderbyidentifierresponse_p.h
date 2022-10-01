// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYPROVIDERBYIDENTIFIERRESPONSE_P_H
#define QTAWS_GETIDENTITYPROVIDERBYIDENTIFIERRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class GetIdentityProviderByIdentifierResponse;

class GetIdentityProviderByIdentifierResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit GetIdentityProviderByIdentifierResponsePrivate(GetIdentityProviderByIdentifierResponse * const q);

    void parseGetIdentityProviderByIdentifierResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetIdentityProviderByIdentifierResponse)
    Q_DISABLE_COPY(GetIdentityProviderByIdentifierResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
