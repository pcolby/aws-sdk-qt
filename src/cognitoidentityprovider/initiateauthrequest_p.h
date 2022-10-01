// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIATEAUTHREQUEST_P_H
#define QTAWS_INITIATEAUTHREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "initiateauthrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class InitiateAuthRequest;

class InitiateAuthRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    InitiateAuthRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   InitiateAuthRequest * const q);
    InitiateAuthRequestPrivate(const InitiateAuthRequestPrivate &other,
                                   InitiateAuthRequest * const q);

private:
    Q_DECLARE_PUBLIC(InitiateAuthRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
