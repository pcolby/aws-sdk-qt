// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FORGOTPASSWORDREQUEST_P_H
#define QTAWS_FORGOTPASSWORDREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "forgotpasswordrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ForgotPasswordRequest;

class ForgotPasswordRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    ForgotPasswordRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   ForgotPasswordRequest * const q);
    ForgotPasswordRequestPrivate(const ForgotPasswordRequestPrivate &other,
                                   ForgotPasswordRequest * const q);

private:
    Q_DECLARE_PUBLIC(ForgotPasswordRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
