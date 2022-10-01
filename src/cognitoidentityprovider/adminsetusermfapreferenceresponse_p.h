// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINSETUSERMFAPREFERENCERESPONSE_P_H
#define QTAWS_ADMINSETUSERMFAPREFERENCERESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminSetUserMFAPreferenceResponse;

class AdminSetUserMFAPreferenceResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit AdminSetUserMFAPreferenceResponsePrivate(AdminSetUserMFAPreferenceResponse * const q);

    void parseAdminSetUserMFAPreferenceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AdminSetUserMFAPreferenceResponse)
    Q_DISABLE_COPY(AdminSetUserMFAPreferenceResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
