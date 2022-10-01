// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETUSERMFAPREFERENCERESPONSE_P_H
#define QTAWS_SETUSERMFAPREFERENCERESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class SetUserMFAPreferenceResponse;

class SetUserMFAPreferenceResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit SetUserMFAPreferenceResponsePrivate(SetUserMFAPreferenceResponse * const q);

    void parseSetUserMFAPreferenceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetUserMFAPreferenceResponse)
    Q_DISABLE_COPY(SetUserMFAPreferenceResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
