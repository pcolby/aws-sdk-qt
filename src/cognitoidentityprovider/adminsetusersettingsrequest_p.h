// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINSETUSERSETTINGSREQUEST_P_H
#define QTAWS_ADMINSETUSERSETTINGSREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "adminsetusersettingsrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminSetUserSettingsRequest;

class AdminSetUserSettingsRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    AdminSetUserSettingsRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   AdminSetUserSettingsRequest * const q);
    AdminSetUserSettingsRequestPrivate(const AdminSetUserSettingsRequestPrivate &other,
                                   AdminSetUserSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(AdminSetUserSettingsRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
