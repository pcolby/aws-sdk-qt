// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMSIGNUPREQUEST_P_H
#define QTAWS_CONFIRMSIGNUPREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "confirmsignuprequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ConfirmSignUpRequest;

class ConfirmSignUpRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    ConfirmSignUpRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   ConfirmSignUpRequest * const q);
    ConfirmSignUpRequestPrivate(const ConfirmSignUpRequestPrivate &other,
                                   ConfirmSignUpRequest * const q);

private:
    Q_DECLARE_PUBLIC(ConfirmSignUpRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
