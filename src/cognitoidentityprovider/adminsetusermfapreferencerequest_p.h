// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINSETUSERMFAPREFERENCEREQUEST_P_H
#define QTAWS_ADMINSETUSERMFAPREFERENCEREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "adminsetusermfapreferencerequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminSetUserMFAPreferenceRequest;

class AdminSetUserMFAPreferenceRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    AdminSetUserMFAPreferenceRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   AdminSetUserMFAPreferenceRequest * const q);
    AdminSetUserMFAPreferenceRequestPrivate(const AdminSetUserMFAPreferenceRequestPrivate &other,
                                   AdminSetUserMFAPreferenceRequest * const q);

private:
    Q_DECLARE_PUBLIC(AdminSetUserMFAPreferenceRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
