// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHANGEPASSWORDREQUEST_P_H
#define QTAWS_CHANGEPASSWORDREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "changepasswordrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ChangePasswordRequest;

class ChangePasswordRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    ChangePasswordRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   ChangePasswordRequest * const q);
    ChangePasswordRequestPrivate(const ChangePasswordRequestPrivate &other,
                                   ChangePasswordRequest * const q);

private:
    Q_DECLARE_PUBLIC(ChangePasswordRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
