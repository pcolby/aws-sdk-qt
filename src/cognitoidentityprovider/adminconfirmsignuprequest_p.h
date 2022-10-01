// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINCONFIRMSIGNUPREQUEST_P_H
#define QTAWS_ADMINCONFIRMSIGNUPREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "adminconfirmsignuprequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminConfirmSignUpRequest;

class AdminConfirmSignUpRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    AdminConfirmSignUpRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   AdminConfirmSignUpRequest * const q);
    AdminConfirmSignUpRequestPrivate(const AdminConfirmSignUpRequestPrivate &other,
                                   AdminConfirmSignUpRequest * const q);

private:
    Q_DECLARE_PUBLIC(AdminConfirmSignUpRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
