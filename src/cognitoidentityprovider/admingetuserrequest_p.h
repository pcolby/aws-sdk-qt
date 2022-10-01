// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINGETUSERREQUEST_P_H
#define QTAWS_ADMINGETUSERREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "admingetuserrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminGetUserRequest;

class AdminGetUserRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    AdminGetUserRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   AdminGetUserRequest * const q);
    AdminGetUserRequestPrivate(const AdminGetUserRequestPrivate &other,
                                   AdminGetUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(AdminGetUserRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
