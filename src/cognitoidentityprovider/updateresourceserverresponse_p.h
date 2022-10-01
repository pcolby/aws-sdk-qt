// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOURCESERVERRESPONSE_P_H
#define QTAWS_UPDATERESOURCESERVERRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class UpdateResourceServerResponse;

class UpdateResourceServerResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit UpdateResourceServerResponsePrivate(UpdateResourceServerResponse * const q);

    void parseUpdateResourceServerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateResourceServerResponse)
    Q_DISABLE_COPY(UpdateResourceServerResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
