// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCESERVERRESPONSE_P_H
#define QTAWS_CREATERESOURCESERVERRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class CreateResourceServerResponse;

class CreateResourceServerResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit CreateResourceServerResponsePrivate(CreateResourceServerResponse * const q);

    void parseCreateResourceServerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateResourceServerResponse)
    Q_DISABLE_COPY(CreateResourceServerResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
