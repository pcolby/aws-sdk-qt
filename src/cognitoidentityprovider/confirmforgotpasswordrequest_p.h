// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMFORGOTPASSWORDREQUEST_P_H
#define QTAWS_CONFIRMFORGOTPASSWORDREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "confirmforgotpasswordrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ConfirmForgotPasswordRequest;

class ConfirmForgotPasswordRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    ConfirmForgotPasswordRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   ConfirmForgotPasswordRequest * const q);
    ConfirmForgotPasswordRequestPrivate(const ConfirmForgotPasswordRequestPrivate &other,
                                   ConfirmForgotPasswordRequest * const q);

private:
    Q_DECLARE_PUBLIC(ConfirmForgotPasswordRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
