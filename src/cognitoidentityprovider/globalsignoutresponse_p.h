// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GLOBALSIGNOUTRESPONSE_P_H
#define QTAWS_GLOBALSIGNOUTRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class GlobalSignOutResponse;

class GlobalSignOutResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit GlobalSignOutResponsePrivate(GlobalSignOutResponse * const q);

    void parseGlobalSignOutResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GlobalSignOutResponse)
    Q_DISABLE_COPY(GlobalSignOutResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
