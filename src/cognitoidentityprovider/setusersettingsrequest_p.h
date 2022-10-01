// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETUSERSETTINGSREQUEST_P_H
#define QTAWS_SETUSERSETTINGSREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "setusersettingsrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class SetUserSettingsRequest;

class SetUserSettingsRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    SetUserSettingsRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   SetUserSettingsRequest * const q);
    SetUserSettingsRequestPrivate(const SetUserSettingsRequestPrivate &other,
                                   SetUserSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetUserSettingsRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
