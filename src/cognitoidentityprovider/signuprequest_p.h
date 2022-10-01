// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SIGNUPREQUEST_P_H
#define QTAWS_SIGNUPREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "signuprequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class SignUpRequest;

class SignUpRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    SignUpRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   SignUpRequest * const q);
    SignUpRequestPrivate(const SignUpRequestPrivate &other,
                                   SignUpRequest * const q);

private:
    Q_DECLARE_PUBLIC(SignUpRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
