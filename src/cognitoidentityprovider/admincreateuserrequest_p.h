// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINCREATEUSERREQUEST_P_H
#define QTAWS_ADMINCREATEUSERREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "admincreateuserrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminCreateUserRequest;

class AdminCreateUserRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    AdminCreateUserRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   AdminCreateUserRequest * const q);
    AdminCreateUserRequestPrivate(const AdminCreateUserRequestPrivate &other,
                                   AdminCreateUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(AdminCreateUserRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
