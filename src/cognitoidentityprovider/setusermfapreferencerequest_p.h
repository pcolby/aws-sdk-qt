// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETUSERMFAPREFERENCEREQUEST_P_H
#define QTAWS_SETUSERMFAPREFERENCEREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "setusermfapreferencerequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class SetUserMFAPreferenceRequest;

class SetUserMFAPreferenceRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    SetUserMFAPreferenceRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   SetUserMFAPreferenceRequest * const q);
    SetUserMFAPreferenceRequestPrivate(const SetUserMFAPreferenceRequestPrivate &other,
                                   SetUserMFAPreferenceRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetUserMFAPreferenceRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
